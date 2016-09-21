#pragma once
#include "Particula.h"

class ParticlePool
{
public:
	ParticlePool();
	void create(int lifetime);
    void createDynamic(int lifetime);
	void animate();
	/*
	{
		for (int i = 0; i < POOL_SIZE; i++)
		{
			particles_[i].animate();
		}
	}*/
private:
	Particula* firstAvailable_;
	static const int POOL_SIZE = 10000;
	Particula particles_[POOL_SIZE];
};