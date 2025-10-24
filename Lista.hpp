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
    void mostrarLista();
    void mostrarPrimero();
    void mostrarUltimoSoc();
    void mostrarUltimoCola();
	void eliminar();
    
private:
    pnodoLista raiz;
};

#endif // LISTA_HPP
