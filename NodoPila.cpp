#include "NodoPila.hpp"
#include "Pila.hpp"

NodoPila::NodoPila(Aficionado v, NodoPila* sig)
{
	valor = v;
	siguiente = sig;
}

NodoPila::~NodoPila()
{
}
