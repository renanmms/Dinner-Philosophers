#pragma once


class Garfo
{
private:
	int n;

public:
	void setNumeroGarfos(int _n);

	int getNumeroGarfos();
};


void Garfo::setNumeroGarfos(int _n)
{
	n = _n;
}

int Garfo::getNumeroGarfos()
{
	return n;
}


