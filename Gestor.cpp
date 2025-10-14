#include "Gestor.hpp"

Gestor::Gestor()
{
}

Gestor::~Gestor()
{
}

void eliminarElemento(int num[], int tamaño, int indice){
	for(int i = indice; i < tamaño - 1; i++){
		num[i] = num[i + 1]
	}
}
void crearAficionados(int contador){
	int num[10];
	for (int i = 0; i < 10; i++){
		num[i] = (contador*10 + i + 1);
	}
	int tamano = sizeof(num) / sizeof(num[0]);
	for (int i = 0; i < 10; i++){
	
		Aficionado p(num, tamano);
		pila.insertar(p)
	}
}