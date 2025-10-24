#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP

#include <iostream>
#include "Aficionado.hpp"

class NodoLista
{
public:
	NodoLista(Aficionado v, NodoLista* sig = NULL);
	~NodoLista();
    Aficionado getValor();
private:
    Aficionado valor;
    NodoLista* siguiente;
    
    friend class Lista;
};

typedef NodoLista* pnodoLista;
#endif // NODOLISTA_HPP
