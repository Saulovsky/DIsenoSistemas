#pragma once

#include "GamePad.h"
#include "EventList.h"
#include "Events.h"

#include <iostream>
#include <queue>
#include <list>
#include <iterator>
class InputMgr
{
private:
	InputMgr();
	static InputMgr* instancia;
public:
	static InputMgr* getInstance();
	static InputMgr* StartUp();
	static InputMgr* Run();
	static InputMgr* ShutDown();
	static InputMgr* CreateListeners();

	Events TempPoolObj;
	bool InputMgrRun;
	queue<Events> EventQueue;
	list<EventList> List;
	enum Estado
	{
		menu, juego, cutscene
	}estado;
};

