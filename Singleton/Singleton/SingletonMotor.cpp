#include "SingletonMotor.h"

SingletonMotor* SingletonMotor::instancia = 0;
SingletonMotor::SingletonMotor() {}

SingletonMotor * SingletonMotor::getInstance()
{
	if (SingletonMotor::instancia == 0)
	{
		SingletonMotor::instancia = new SingletonMotor();
	}
	return  instancia;

}
