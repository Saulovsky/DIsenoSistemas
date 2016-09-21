#include "PhysicsMgr.h"

PhysicsMgr* PhysicsMgr::instancia = 0;
PhysicsMgr::PhysicsMgr() {}

PhysicsMgr * PhysicsMgr::getInstance()
{
	if (PhysicsMgr::instancia == 0)
	{
		PhysicsMgr::instancia = new PhysicsMgr();
	}
	return  instancia;
}
PhysicsMgr * PhysicsMgr::StartUp()
{
	std::cout << "Physics Manager Startup" << std::endl;

	return 0;
}
PhysicsMgr * PhysicsMgr::Run()
{
	return 0;
}

PhysicsMgr * PhysicsMgr::ShutDown()
{
	std::cout << "Physics Manager Shutting Down" << std::endl;

	return 0;
}
