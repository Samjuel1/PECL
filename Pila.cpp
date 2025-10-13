#include "Pila.hpp"

Pila::Pila()
{
	ultimo = NULL;
	longitud = 0;
}

void Pila::insertar(int v)
{
	Aficionado nuevoAficionado(v);
	cout << "Nuevo aficionado: ";  //Lineas para quitar
    nuevoAficionado.mostrar();     //
	pnodoPila nuevo = new NodoPila(nuevoAficionado,ultimo);
	ultimo = nuevo;
	longitud++;
}

Aficionado Pila::extraer()
{
	pnodoPila nodo;
	Aficionado v;
	if(!ultimo){
		cout << "La pila esta vacia " << endl;
		return 0;
}
	nodo = ultimo;
	ultimo = nodo->siguiente;
	v = nodo -> valor;
	longitud--;
	delete nodo;
	return v;
}

Aficionado Pila::cima()
{
//	pnodoPila nodo;
	if(!ultimo){
		cout << "La pila esta vacia " << endl;
		return 0;
	}
	return ultimo -> valor;
}

void Pila::mostrar()
{
	pnodoPila aux = ultimo;
	cout << "El contenido de la pila es: " << endl;
	while(aux){
		aux->valor.mostrar();
		aux = aux->siguiente;
	}
	cout << endl;
}

int Pila::getLongitud()
{
	return this->longitud;
}

Pila::~Pila()
{
	pnodoPila aux;
	while(ultimo){
		aux = ultimo;
		ultimo = ultimo->siguiente;
		delete aux;
	}
}

