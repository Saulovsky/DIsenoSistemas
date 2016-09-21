#pragma once
#include <iostream>
class RenderMgr
{
private:
	RenderMgr();
	static RenderMgr* instancia;

public:
	static RenderMgr* getInstance();
	static RenderMgr* StartUp();
	static RenderMgr* Run();
	static RenderMgr* ShutDown();

};

