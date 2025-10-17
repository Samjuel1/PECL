#include "Cola.hpp"

Cola::Cola()
{
	primero = NULL;
	ultimo = NULL;
	longitud = 0;
}
void Cola::insertar(Aficionado v)
{
	pnodoCola nuevo;
	nuevo = new NodoCola(v);
	if(ultimo)
		ultimo->siguiente = nuevo;
	
	ultimo = nuevo;
	
	if(!primero)
		primero = nuevo;
	longitud++;
}
void Cola::mostrar()
{
	pnodoCola aux = primero;
	cout << endl;
	while(aux) {
		aux->valor.mostrar();
		aux = aux->siguiente;
	}
	cout << endl;
}
Aficionado Cola::eliminar()
{
	pnodoCola nodo;
	Aficionado v;
	nodo = primero;
	if(!nodo)
		return 0;
	primero = nodo->siguiente;
	v = nodo->valor;
	delete nodo;
	if(!primero)
		ultimo = NULL;
	longitud--;
	return v;
}
Aficionado Cola::verPrimero(){
	return primero->valor;
}

Cola::~Cola()
{
	while(primero)
		eliminar();
}

