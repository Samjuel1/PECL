#include "Lista.hpp"

Lista::Lista()
{
    raiz = NULL;
}

Lista::~Lista()
{
}

void Lista::insertarOrdenado(Aficionado v){
    pnodoLista nuevo = new NodoLista(v);
    int info = v.getMinutos();
    if (this->raiz == NULL){
        this->raiz = nuevo;
    }
    else if (info <= raiz->valor.getMinutos()){
        nuevo->siguiente = raiz;
        this->raiz = nuevo;
    }
    else{
        pnodoLista delante = this->raiz;
        pnodoLista atras = this->raiz;
        while(info > delante->valor.getMinutos() && delante->siguiente != NULL){
            atras = delante;
            delante = delante-> siguiente;
        }
        if (info > delante->valor.getMinutos()){
            nuevo->siguiente = NULL;
            delante->siguiente = nuevo;
        }
        else{
            atras->siguiente = nuevo;
            nuevo->siguiente = delante;
        }
    }
}



