#include "AnimationMgr.h"

AnimationMgr* AnimationMgr::instancia = 0;
AnimationMgr::AnimationMgr() {}

AnimationMgr * AnimationMgr::getInstance()
{
	if (AnimationMgr::instancia == 0)
	{
		AnimationMgr::instancia = new AnimationMgr();
	}
	return  instancia;
}
AnimationMgr * AnimationMgr::StartUp()
{
	std::cout << "Animation Manager Startup" << std::endl;

	return 0;
}
AnimationMgr * AnimationMgr::Run()
{
	return 0;
}

AnimationMgr * AnimationMgr::ShutDown()
{
	std::cout << "Animation Manager Shutting Down" << std::endl;

	return 0;
}
