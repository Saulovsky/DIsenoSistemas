#include "UpdateMgr.h"

UpdateMgr* UpdateMgr::instancia = 0;
UpdateMgr::UpdateMgr() {}

UpdateMgr * UpdateMgr::getInstance()
{
	if (UpdateMgr::instancia == 0)
	{
		UpdateMgr::instancia = new UpdateMgr();
	}
	return  instancia;
}
UpdateMgr * UpdateMgr::StartUp()
{
	std::cout << "Update Manager Startup" << std::endl;

	return 0;
}
UpdateMgr * UpdateMgr::Run()
{
	return 0;
}

UpdateMgr * UpdateMgr::ShutDown()
{
	std::cout << "Update Manager Shutting Down" << std::endl;

	return 0;
}
