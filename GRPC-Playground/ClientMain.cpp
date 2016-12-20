#include "ClientMain.h"
#include "rpc/messages.grpc.pb.h"

#include <grpc++/grpc++.h>
#include <iostream>


using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using Messages::InitRequest;
using Messages::InitReply;
using Messages::IPC;

ClientMain::ClientMain()
{
	class IPCComm {
		std::unique_ptr<IPC::Stub> m_stub;
	public:
		IPCComm(std::shared_ptr<Channel> channel) : m_stub(IPC::NewStub(channel)) { }

		bool init() {
			InitRequest request;
			request.set_name("test");
			request.set_pid(GetCurrentProcessId());

			InitReply reply;
			ClientContext context;

			auto status(m_stub->Init(&context, request, &reply));
			if (status.ok())
				return reply.status();

			std::cout << "RPC failed: " << status.error_message() << std::endl;
			return false;
		}
	};

	IPCComm comm(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
	while(1)
		std::cout << "Init RPC: " << comm.init();
}
