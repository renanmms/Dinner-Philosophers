#include "Mesa.h"


Mesa::Mesa() 
{

	for (int i = 0; i < 5; i++)
	{
		filosofos[i] = Filosofo();
		t[i] = std::thread(&Filosofo::status);
	}
}