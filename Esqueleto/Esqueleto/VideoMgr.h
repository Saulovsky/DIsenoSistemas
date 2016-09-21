#pragma once
#include <iostream>
class VideoMgr
{
private:
	VideoMgr();
	static VideoMgr* instancia;

public:
	static VideoMgr* getInstance();
	static VideoMgr* StartUp();
	static VideoMgr* Run();
	static VideoMgr* ShutDown();

};

