#include "VideoMgr.h"

VideoMgr* VideoMgr::instancia = 0;
VideoMgr::VideoMgr() {}

VideoMgr * VideoMgr::getInstance()
{
	if (VideoMgr::instancia == 0)
	{
		VideoMgr::instancia = new VideoMgr();
	}
	return  instancia;
}
VideoMgr * VideoMgr::StartUp()
{
	std::cout << "Video Manager Startup" << std::endl;

	return 0;
}
VideoMgr * VideoMgr::Run()
{
	return 0;
}

VideoMgr * VideoMgr::ShutDown()
{
	std::cout << "Video Manager Shutting Down" << std::endl;

	return 0;
}

