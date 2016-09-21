#pragma once
class SingletonMotor {
private:
	SingletonMotor();
	static SingletonMotor* instancia;

public:
	static SingletonMotor* getInstance();
	//void OtroMetodo();
};