#include "InputMgr.h"

InputMgr* InputMgr::instancia = 0;
InputMgr::InputMgr() {}

InputMgr * InputMgr::getInstance()
{
	if (InputMgr::instancia == 0)
	{
		InputMgr::instancia = new InputMgr();
	}
	return  instancia;
}
InputMgr * InputMgr::StartUp()
{
	std::cout << "Input Manager Startup" << std::endl;
	InputMgr::instancia->estado = Estado::menu;
	CreateListeners();
	InputMgr::instancia->InputMgrRun = true;
	return 0;
}
InputMgr * InputMgr::Run()
{
	GamePad gamepad;

	bool wasConnected = true;

	while (InputMgr::instancia->InputMgrRun == true)
	{
		

		Sleep(100);

		if (!gamepad.Refresh())
		{
			if (wasConnected)
			{
				wasConnected = false;

				cout << "Please connect an Xbox 360 controller." << endl;
			}
		}
		else
		{
			if (!wasConnected)
			{
				wasConnected = true;

				cout << "Controller connected on port " << gamepad.GetPort() << endl;
			}

			if (gamepad.IsPressed(XINPUT_GAMEPAD_A))
			{
				Events(1);
				InputMgr::instancia->EventQueue.push(1);

				cout << "(A) button pressed" << endl;
			}

			if (gamepad.IsPressed(XINPUT_GAMEPAD_B))
			{
				Events(2);
				InputMgr::instancia->EventQueue.push(2);

				cout << "(B) button pressed" << endl;
			}

			if (gamepad.IsPressed(XINPUT_GAMEPAD_Y))
			{
				Events(3);
				InputMgr::instancia->EventQueue.push(3);

				cout << "(Y) button pressed" << endl;
			}

			if (gamepad.IsPressed(XINPUT_GAMEPAD_X))
			{
				Events(4);
				InputMgr::instancia->EventQueue.push(4);

				cout << "(X) button pressed" << endl;
			}
			while (!InputMgr::instancia->EventQueue.empty())//Reviso que la cola de eventos no este vacia
			{
				//tomo el objeto mas antiguo de la cola, lo guardo y lo saco de la cola.
				InputMgr::instancia->TempPoolObj = InputMgr::instancia->EventQueue.front();
				InputMgr::instancia->EventQueue.pop();
				//Itero sobre la lista de listeners
				for (list<EventList>::iterator it = InputMgr::instancia->List.begin();
				it != InputMgr::instancia->List.end(); ++it)
				{
					//comparo el tipo del evento con el tipo de cada listener
					if (InputMgr::instancia->TempPoolObj.type == it->Ltype)
					{
						//imprimo los eventos escuchados, podria llamar
						cout << InputMgr::instancia->TempPoolObj.type << ", " << it->Ltype << endl;
						//it->OtroMetodo(); //una funcion compartida con todos los listeners
						//si el callback de la funcion es verdadero se sigue recorriendo la lista de listeners
						if (it->Callback() == false)
						{
							//cuando es falsa el iterador se detiene 
							break;
							//InputMgr::instancia->InputMgrRun = false;
						}
					}
				}
			}
		}
	}
	return 0;
}

InputMgr * InputMgr::ShutDown()
{
	std::cout << "Input Manager Shutting Down" << std::endl;

	return 0;
}


InputMgr * InputMgr::CreateListeners()
{
	//Volverlo context-sensitive con una maquina de estados
	if (InputMgr::instancia->estado == Estado::menu)
	{
		InputMgr::instancia->List.push_front(4);
		InputMgr::instancia->List.push_front(3);
		InputMgr::instancia->List.push_front(2);
		InputMgr::instancia->List.push_front(1);
	}
	else if (InputMgr::instancia->estado == Estado::juego)
	{
		InputMgr::instancia->List.push_front(7);
		InputMgr::instancia->List.push_front(6);
		InputMgr::instancia->List.push_front(5);
		InputMgr::instancia->List.push_front(4);
		InputMgr::instancia->List.push_front(3);
		InputMgr::instancia->List.push_front(2);
		InputMgr::instancia->List.push_front(1);
	}
	else if (InputMgr::instancia->estado == Estado::cutscene)
	{
		//Enmascarar input y deshabilitarlo
	}
return 0;
}
