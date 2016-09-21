#include "AnimationMgr.h"
#include   "FileSysMgr.h"
#include     "InputMgr.h"
#include    "MemoryMgr.h"
#include   "PhysicsMgr.h"
#include    "RenderMgr.h"
#include    "UpdateMgr.h"
#include     "VideoMgr.h"

int main() {
	bool mainloop = true;
	//Instancias
	AnimationMgr * animMgr;
	FileSysMgr * fileSysMgr;
	InputMgr *   inputMgr;
	MemoryMgr *  memoryMgr;
	PhysicsMgr * physicsMgr;
	RenderMgr *  renderMgr;
	UpdateMgr *  updateMgr;
	VideoMgr *   videoMgr;

	animMgr = AnimationMgr::getInstance();
	fileSysMgr = FileSysMgr::getInstance();
	inputMgr = InputMgr::getInstance();
	memoryMgr = MemoryMgr::getInstance();
	physicsMgr = PhysicsMgr::getInstance();
	renderMgr = RenderMgr::getInstance();
	updateMgr = UpdateMgr::getInstance();
	videoMgr = VideoMgr::getInstance();

	//Startups
	animMgr->StartUp();
	fileSysMgr->StartUp();
	inputMgr->StartUp();
	memoryMgr->StartUp();
	physicsMgr->StartUp();
	renderMgr->StartUp();
	updateMgr->StartUp();
	videoMgr->StartUp();
	
	while (mainloop)
	{
		//Run main game loop
		animMgr->Run();
		fileSysMgr->Run();
		inputMgr->Run();
		memoryMgr->Run();
		physicsMgr->Run();
		renderMgr->Run();
		updateMgr->Run();
		videoMgr->Run();

		if (inputMgr->InputMgrRun = true) mainloop = false; //un comando especifico de input termina el main loop
	}
	//cuando el main game loop se finaliza, se empieza una secuencia de shutdown 
	//en orden inverso a su startup y se termina el programa.
	videoMgr->ShutDown();
	updateMgr->ShutDown();
	renderMgr->ShutDown();
	physicsMgr->ShutDown();
	memoryMgr->ShutDown();
	inputMgr->ShutDown();
	fileSysMgr->ShutDown();
	animMgr->ShutDown();
	return 0;
}
