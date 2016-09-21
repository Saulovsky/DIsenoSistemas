#include "EventList.h"
#include "GamePad.h"

bool EventList::Callback()
{
	switch (Ltype)
	{
		case 1:
			cout << "soy 1\n";
			return true;
			break;
		case 2:
			cout << "soy 2\n";
			return true;
			break;
		case 3:
			cout << "soy 3\n";
			return true;
			break;
		case 4:
			cout << "soy 4\n";
			return false;
			break;
	}
}
