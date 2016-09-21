#include "Particula.h"
bool Particula::animate()
{
	if (!inUse()) return false;
	framesLeft_--;
	return framesLeft_ == 0;
}
