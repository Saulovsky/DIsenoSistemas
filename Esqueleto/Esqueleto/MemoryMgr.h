#pragma once
#include <iostream>
class MemoryMgr
{
private:
	MemoryMgr();
	static MemoryMgr* instancia;

public:
	static MemoryMgr* getInstance();
	static MemoryMgr* StartUp();
	static MemoryMgr* Run();
	static MemoryMgr* ShutDown();

};

