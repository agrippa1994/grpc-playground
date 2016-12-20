#include "ServerMain.h"
#include "rpc/messages.grpc.pb.h"

#include <grpc++/grpc++.h>
#include <iostream>


using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using Messages::InitRequest;
using Messages::InitReply;
using Messages::IPC;

ServerMain::ServerMain()
{
	class Service final : public IPC::Service {
		Status Init(ServerContext *context, const InitRequest *request, InitReply *response) override {
			std::cout << "Got Init request from PID " << request->pid() << std::endl;
			response->set_status(true);
			return Status::OK;
		}
	};

	Service service;

	ServerBuilder builder;
	builder.AddListeningPort("127.0.0.1:50051", grpc::InsecureServerCredentials());
	builder.RegisterService(&service);

	std::unique_ptr<Server> server(builder.BuildAndStart());
	server->Wait();
}
