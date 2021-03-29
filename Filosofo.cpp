#include "Filosofo.h"

//Inicializando o construtor
Filosofo:: Filosofo() 
{
	 //Filosofos começam pensando
	this->tComendo = 5000;
	this->tPensando = 5000;
	this->tEsperando = 5000;
	this->estado = PENSANDO;
	this->garfoDireita = 1;
	this->garfoEsquerda = 1;
}

//Mostra o status dos filosofos
void Filosofo::status(int i)
{
	if (estado == COMENDO)
	{
		std::cout << "Filosofo " << i << " esta comendo..." << std::endl;
	}
	else if (estado == PENSANDO)
	{
		std::cout << "Filosofo" << i << " esta pensando..." << std::endl;
	}
	else
	{
		std::cout << "Filosofo " << i << " esta esperando..." << std::endl;
	}
}


void start()
{
	
}

int Filosofo::pegarGarfos() 
{
	if (estado == PENSANDO && (garfoDireita && garfoEsquerda))
	{
		return COMENDO;
	}
	else if(estado == ESPERANDO && !(garfoDireita || garfoEsquerda))
	{

		return DEADLOCK;
		
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
	Sleep(tComendo);
}

void Filosofo::esperar()
{
	Sleep(tEsperando);
}

void Filosofo::pensar()
{
	Sleep(tPensando);
}

//Verifica quantidade de garfos na mesa
int Filosofo::verificaGarfos() 
{
	return (int)(garfoDireita + garfoEsquerda);
}