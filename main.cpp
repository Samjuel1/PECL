#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Aficionado.hpp"
#include "Pila.hpp"
#include "Cola.hpp"
#include "Gestor.hpp"

using namespace std;

int main(int argc, char **argv)
{ 
	char opcion;

	Pila pila;
	Cola cola_soc;
	Cola cola_sim;
	Gestor gestor;
	
	do{
	
	srand(time(0));
		cout << "Indique la opcion deseada: " << endl;
		cin >> opcion;
		opcion = toupper(opcion);
		
/*	switch (opcion){
		case 'A':
			
		}*/
		for(int i = 1; i < 11; i++){
			pila.insertar(i - 1);
			pila.mostrar();
		//	break;
		}	
		
	
	
	for (int i = 1; i < 11; i++){
		Aficionado aux = pila.extraer();
		if (aux.getSocio()){
		cola_soc.insertar(aux);
	} else{
		cola_sim.insertar(aux);
	}
	}
	cout << endl;
	cout << "El contenido de la cola de socios es: " << endl;
	cola_soc.mostrar();
	cout << "El contenido de la cola de simpatizantes es: " << endl;
	cola_sim.mostrar();
	
	} while (opcion!= 'S');
	
	return 0;
	
}
