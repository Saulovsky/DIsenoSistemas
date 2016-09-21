#include "RenderMgr.h"

RenderMgr* RenderMgr::instancia = 0;
RenderMgr::RenderMgr() {}

RenderMgr * RenderMgr::getInstance()
{
	if (RenderMgr::instancia == 0)
	{
		RenderMgr::instancia = new RenderMgr();
	}
	return  instancia;
}
RenderMgr * RenderMgr::StartUp()
{
	std::cout << "Render Manager Startup" << std::endl;

	return 0;
}
RenderMgr * RenderMgr::Run()
{
	return 0;
}

RenderMgr * RenderMgr::ShutDown()
{
	std::cout << "Render Manager Shutting Down" << std::endl;

	return 0;
}
