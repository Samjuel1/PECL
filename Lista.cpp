#include "Lista.hpp"

Lista::Lista()
{
    raiz = NULL;
}

Lista::~Lista()
{
}

void Lista::insertarOrdenado(Aficionado v) {
    pnodoLista nuevo = new NodoLista(v);
    int info = v.getMinutos();
    bool socio = v.getSocio();

    if (this->raiz == NULL) {
        this->raiz = nuevo;
        return;
    }

    pnodoLista delante = this->raiz;
    pnodoLista anterior = NULL;

    if (socio) {
        
        while (delante != NULL && delante->valor.getSocio() &&
               delante->valor.getMinutos() < info) {
            anterior = delante;
            delante = delante->siguiente;
        }

        nuevo->siguiente = delante;
        if (anterior == NULL)
            this->raiz = nuevo;
        else
            anterior->siguiente = nuevo;
    }
    else {

        while (delante != NULL && delante->valor.getSocio()) {
            anterior = delante;
            delante = delante->siguiente;
        }

        while (delante != NULL && !delante->valor.getSocio() &&
               delante->valor.getMinutos() < info) {
            anterior = delante;
            delante = delante->siguiente;
        }

        nuevo->siguiente = delante;
        if (anterior == NULL)
            this->raiz = nuevo; 
        else
            anterior->siguiente = nuevo;
    }
}

void Lista::mostrarLista(){
    cout << endl;
	pnodoLista aux = raiz;
	while(aux) {
		aux->valor.mostrar();
		aux = aux->siguiente;
	}
	cout << endl;
}

void Lista::mostrarPrimero(){
    this->raiz->valor.mostrar();
}
void Lista::mostrarUltimoSoc(){
    pnodoLista delante = this->raiz;
    pnodoLista anterior = NULL;
    while (delante != NULL && delante->valor.getSocio()) {
            anterior = delante;
            delante = delante->siguiente;
    }
    anterior->valor.mostrar();
    delante->valor.mostrar();
}

void Lista::mostrarUltimoCola(){
    pnodoLista delante = this->raiz;
    while (delante->siguiente != NULL){
        delante = delante->siguiente;
    }
    delante->valor.mostrar();
}

