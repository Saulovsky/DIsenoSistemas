#pragma once
#include <iostream>
class PhysicsMgr
{
private:
	PhysicsMgr();
	static PhysicsMgr* instancia;

public:
	static PhysicsMgr* getInstance();
	static PhysicsMgr* StartUp();
	static PhysicsMgr* Run();
	static PhysicsMgr* ShutDown();

};
