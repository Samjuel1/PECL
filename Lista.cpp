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
    if (this->raiz == NULL){
        cout << "La lista esta vacia" << endl;
        cout << endl;
    }
    else{
        cout << endl;
        pnodoLista aux = raiz;
        while(aux) {
            aux->valor.mostrar();
            aux = aux->siguiente;
        }
        cout << endl;
    }
}

void Lista::mostrarPrimero(){
    if (this->raiz == NULL){
        cout << "La lista esta vacia" << endl;
        cout << endl;
    }
    else{
        cout << "-El primer Aficionado de la lista:" << endl;
        this->raiz->valor.mostrar();
        cout << endl;
    }
}
void Lista::mostrarUltimoSoc(){
    pnodoLista delante = this->raiz;
    pnodoLista anterior = NULL;
    if (this->raiz == NULL){
        cout << "La lista esta vacia" << endl;
        cout << endl;
    }
    else{
        while (delante != NULL && delante->valor.getSocio()) {
            anterior = delante;
            delante = delante->siguiente;
        }
        if (anterior == NULL){
            cout << "La lista no contiene ningun Socio" << endl;
            cout << endl;
            if (delante == NULL){
                cout << "La lista no contiene ningun Simpatizante" << endl;
                cout << endl;
            }
            else{
                cout << "-El primer Simpatizante:" << endl;
                delante->valor.mostrar();
                cout << endl;
            }
        }
        else{
            cout << "-El ultimo Socio:" << endl;
            anterior->valor.mostrar();
            cout << endl;
            if (delante == NULL){
                cout << "La lista no contiene ningun Simpatizante" << endl;
                cout << endl;
            }
            else{
                cout << "-El primer Simpatizante:" << endl;
                delante->valor.mostrar();
                cout << endl;
            }
        }
    }
}

void Lista::mostrarUltimoCola(){
    if (this->raiz == NULL){
        cout << "La lista esta vacia" << endl;
        cout << endl;
    }
    else{
        pnodoLista delante = this->raiz;
        while (delante->siguiente != NULL){
            delante = delante->siguiente;
        }
        cout << "-El ultimo Aficionado de la lista:" << endl;
        delante->valor.mostrar();
        cout << endl;
    }
}

void Lista::eliminar(){
	pnodoLista nodo;
	nodo = raiz;
	if (!nodo){
		cout << "La lista esta vacia" << endl;
	}
	while(raiz != NULL){
	nodo = raiz;
	raiz = raiz->siguiente;
	delete nodo;
	}
	cout << "Lista de aficionados eliminada" << endl;
}

