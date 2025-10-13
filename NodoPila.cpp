#include "NodoPila.hpp"

NodoPila::NodoPila(Aficionado v, NodoPila* sig)
{
	valor = v;
	siguiente = sig;
}

NodoPila::~NodoPila()
{
}
