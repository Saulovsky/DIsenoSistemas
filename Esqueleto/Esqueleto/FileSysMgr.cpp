#include "FileSysMgr.h"

FileSysMgr* FileSysMgr::instancia = 0;
FileSysMgr::FileSysMgr() {}

FileSysMgr * FileSysMgr::getInstance()
{
	if (FileSysMgr::instancia == 0)
	{
		FileSysMgr::instancia = new FileSysMgr();
	}
	return  instancia;
}
FileSysMgr * FileSysMgr::StartUp()
{
	std::cout << "FileSys Manager Startup" << std::endl;

	return 0;
}
FileSysMgr * FileSysMgr::Run()
{
	return 0;
}

FileSysMgr * FileSysMgr::ShutDown()
{
	std::cout << "FileSys Manager Shutting Down" << std::endl;

	return 0;
}
