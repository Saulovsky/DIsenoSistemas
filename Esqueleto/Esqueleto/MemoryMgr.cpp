#include "MemoryMgr.h"

MemoryMgr* MemoryMgr::instancia = 0;
MemoryMgr::MemoryMgr() {}

MemoryMgr * MemoryMgr::getInstance()
{
	if (MemoryMgr::instancia == 0)
	{
		MemoryMgr::instancia = new MemoryMgr();
	}
	return  instancia;
}
MemoryMgr * MemoryMgr::StartUp()
{
	std::cout << "Memory Manager Startup" << std::endl;

	return 0;
}
MemoryMgr * MemoryMgr::Run()
{
	return 0;
}

MemoryMgr * MemoryMgr::ShutDown()
{
	std::cout << "Memory Manager Shutting Down" << std::endl;

	return 0;
}
