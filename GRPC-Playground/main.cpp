#include "ServerMain.h"
#include "ClientMain.h"

#include <iostream>
#include <thread>

int main() {
	std::thread server_thread([]() { ServerMain(); });
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	std::thread client_thread([]() { ClientMain(); });

	client_thread.join();
	server_thread.join();
	std::cin.get();
}