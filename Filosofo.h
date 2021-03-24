#pragma once
#include <iostream>
#include <Windows.h>

enum semaforo {
	PENSANDO,
	COMENDO,
	ESPERANDO
};


class Filosofo {
private:
	int tComendo;
	int tPensando;
	int tEsperando;

public:

	Filosofo();
	bool garfoDireita;
	bool garfoEsquerda;

	/*bool comendo;
	bool pensando;
	bool esperando;*/

	int estado;
	
	void comer();
	void pensar();
	void esperar();
	int pegarGarfos();
	int devolverGarfos();

	void status();
};





//void statusDaMesa()
//{
//	
//}

//char Filosofo::comer() 
//{
//	std::cout << " Comendo " << std::endl;
//	Sleep(5000);
//	return 'C';
//}
//
//char Filosofo::pensar(int i)
//{
//	std::cout << " Filosofo " << i << " Pensando... " << std::endl;
//	Sleep(7000);
//	return 'P';
//}
//
//char Filosofo::esperar()
//{
//	std::cout << " Esperando" << std::endl;
//	Sleep(2000);
//	return 'E';
//
//}
//
//void setQtd(int n)
//{
//	
//
//}