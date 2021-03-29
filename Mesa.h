#pragma once
#include "Filosofo.h"

class Mesa {
private:
	std::thread t[5];
	Filosofo filosofos[5];
public:
	Mesa();

	void start();
};