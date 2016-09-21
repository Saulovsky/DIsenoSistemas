#pragma once
#include <iostream>
class AnimationMgr
{
private:
	AnimationMgr();
	static AnimationMgr* instancia;

public:
	static AnimationMgr* getInstance();
	static AnimationMgr* StartUp();
	static AnimationMgr* Run();
	static AnimationMgr* ShutDown();

};

