#include <iostream>
class Particula
{
public:
	Particula()
		: framesLeft_(0)
	{}
	void init(int lifetime)
	{
		framesLeft_ = lifetime;
	}
	//void animate()
	//{
	//	if (!inUse()) return;
	//	framesLeft_--;
	//	std::cout << "particula"  /*<< Nparticula*/<<std::endl;
	//}
	bool animate();

	bool inUse() const { return framesLeft_ > 0; }

	Particula* getNext() const { return state_.next; }
	void setNext(Particula* next) { state_.next = next; }
private:
	int framesLeft_;
	union
	{
		// State when it's in use.
		struct
		{
		} live;
		// State when it's available.
		Particula* next;
	} state_;
};