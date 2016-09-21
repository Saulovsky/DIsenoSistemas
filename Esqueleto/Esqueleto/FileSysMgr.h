#pragma once
#include <iostream>
class FileSysMgr
{
private:
	FileSysMgr();
	static FileSysMgr* instancia;

public:
	static FileSysMgr* getInstance();
	static FileSysMgr* StartUp();
	static FileSysMgr* Run();
	static FileSysMgr* ShutDown();

};

