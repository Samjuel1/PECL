#include "NodoLista.hpp"

NodoLista::NodoLista(Aficionado v, NodoLista* sig)
{
    valor = v;
    siguiente = sig;
}

NodoLista::~NodoLista()
{
}

