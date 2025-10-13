#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include <iostream>
#include "Aficionado.hpp"
using namespace std;

class NodoPila
{
public:
	NodoPila(Aficionado v, NodoPila* sig = NULL);
	~NodoPila();

private:
	Aficionado valor;
	NodoPila* siguiente;
	friend class Pila;
};

typedef NodoPila* pnodoPila;
#endif // NODOPILA_HPP
