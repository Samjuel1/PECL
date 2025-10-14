#ifndef GESTOR_HPP
#define GESTOR_HPP
#include "Aficionado.hpp"
#include <cstdlib>

class Gestor
{
public:
	Gestor();
	~Gestor();
	void crearAficionados();
	void eliminarElemento();
	int contadorA = 0;
};

#endif // GESTOR_HPP
