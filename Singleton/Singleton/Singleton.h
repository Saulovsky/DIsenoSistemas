#pragma once
#include <stddef.h>
class Singleton
{
public:
	//punto de acceso global
	static Singleton& instanciar()
	{
		//"Lazy" initialize
		if (instancia == NULL) instancia = new Singleton;
		return *instancia;
	}
private:
	//un "wrapper" que no permite crear mas instancias
	Singleton() {}
	static Singleton* instancia;
};

