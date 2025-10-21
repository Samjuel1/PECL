#ifndef LISTA_HPP
#define LISTA_HPP
#include "NodoLista.hpp"
#include "Aficionado.hpp"

class Lista
{
public:
	Lista();
	~Lista();
    void insertarOrdenado(Aficionado v);
    
private:
    pnodoLista raiz;
};

#endif // LISTA_HPP
