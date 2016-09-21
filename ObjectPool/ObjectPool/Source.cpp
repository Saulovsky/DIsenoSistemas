#include "ObjPool.h"
#include <time.h>

int main()
{
	clock_t t;
	t = clock();

	ParticlePool pool;
	ParticlePool::ParticlePool();

	for (int i = 0; i < 10000; i++) {
		pool.create(30);
		pool.animate();//Animate tiene un for que recorre el arreglo de particulas, adentro se animara cada cuadro, afuera una vez por iteracion de for?
	}
	
	//for (int i = 0; i < 100; i++) {
	//	/*particles_[i].amimate();*///falta acceder al arreglo y animar esa particula
	//	pool.animate();
	//}

	t = clock() - t;
	std::cout << "Tiempo de pool normal: " << ((float)t) / CLOCKS_PER_SEC << "s" << std::endl;

	clock_t t2;
	t2 = clock();

	ParticlePool poolDyn;
	ParticlePool::ParticlePool();
	for (int i = 0; i < 10000; i++) {
		pool.createDynamic(30);
		pool.animate();
	}
	
	t2 = clock() - t2;
	std::cout << "Tiempo de pool dinamico: " << ((float)t2) / CLOCKS_PER_SEC  << "s" << std::endl;


    return 0;
}