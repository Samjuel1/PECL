#ifndef PILA_HPP
#define PILA_HPP
#include "NodoPila.hpp"
using namespace std;

class Pila
{
public:
	Pila();
	~Pila();
	void insertar(Aficionado v);
	Aficionado extraer();
	Aficionado cima();
	void mostrar();
	int getLongitud();
	
private:
	pnodoPila ultimo;
	int longitud;

};

#endif // PILA_HPP
