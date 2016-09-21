#pragma once

#include <vector>
#include <list>
#include <iostream>

class EventList
{
public:
	int Ltype;
	EventList(int Listtype)
	{
		Ltype = Listtype;
	}

	bool Callback();

	EventList() {}
};