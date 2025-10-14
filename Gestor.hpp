#ifndef GESTOR_HPP
#define GESTOR_HPP
#include "Aficionado.hpp"
#include "Pila.hpp"
#include <cstdlib>

class Gestor
{
public:
	Gestor();
	~Gestor();
	void crearAficionados(int contador, Pila pila);
	void eliminarElemento(int num, int tamano, int random);
	int contadorA = 0;
};

#endif // GESTOR_HPP
