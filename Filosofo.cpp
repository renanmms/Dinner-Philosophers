#include "Filosofo.h"

//Inicializando o construtor
 Filosofo:: Filosofo() 
{
	this->tComendo = 5000;
	this->tPensando = 5000;
	this->tEsperando = 5000;
	this->estado = PENSANDO;
	this->garfoDireita = 1;
	this->garfoEsquerda = 1;
}

//Mostra o status dos filosofos
void Filosofo::status()
{
	if (estado == COMENDO)
	{
		std::cout << "Filosofo esta comendo..." << std::endl;
	}
	else if (estado == PENSANDO)
	{
		std::cout << "Filosofo esta pensando..." << std::endl;
	}
	else
	{
		std::cout << "Filosofo esta esperando..." << std::endl;
	}
}

int Filosofo::pegarGarfos() 
{
	if (garfoDireita && garfoEsquerda)
	{
		return COMENDO;
	}
	return ESPERANDO;
	
}

int Filosofo::devolverGarfos()
{
	garfoDireita = garfoEsquerda = 1;
	return PENSANDO;
}

//Estados de um filosofo

void Filosofo::comer()
{
	Sleep((DWORD)tComendo);
}

void Filosofo::esperar()
{
	Sleep((DWORD)tEsperando);
}

void Filosofo::pensar()
{
	Sleep((DWORD)tPensando);
}