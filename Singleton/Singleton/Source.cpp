//#include "Singleton.h"//singleton del libro

#include "SingletonMotor.h"
#include <iostream>

int main()
{
	SingletonMotor * singleton;
	SingletonMotor * singleton1;

	singleton = SingletonMotor::getInstance();
	singleton1 = SingletonMotor::getInstance();

	std::cout << "Instancia de primer obj:  " << &singleton->getInstance << std::endl;
	std::cout << "Instancia de segundo obj: " << &singleton1->getInstance << std::endl;
	std::getchar();
	return 0;
}