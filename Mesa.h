#pragma once
#include "Filosofo.h"

class Mesa 
{
private:
	
	Filosofo f;
	int numFilosofos; //Numero de filosofos na mesa
	int numGarfos; // Numero de garfos na mesa

public: 
	// Construtor da mesa
	//Mesa(){}

	/*Mesa(Filosofo  _f[], int n) 
	{
		f = _f;
		numFilosofos = n;
	}*/

	void deadlockMsg()
	{
		std::cout << "ERROR! DEADLOCK DETECTED!" << std::endl;
	
	}

	Filosofo getFilosofos();
};