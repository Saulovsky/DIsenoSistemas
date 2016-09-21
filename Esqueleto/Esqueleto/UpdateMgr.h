#pragma once
#include <iostream>
class UpdateMgr
{
private:
	UpdateMgr();
	static UpdateMgr* instancia;

public:
	static UpdateMgr* getInstance();
	static UpdateMgr* StartUp();
	static UpdateMgr* Run();
	static UpdateMgr* ShutDown();

};

