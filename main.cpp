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
	srand(time(0));
	
	do{
		cout << "Indique la opcion deseada: " << endl;
		cin >> opcion;
		opcion = toupper(opcion);
		
		
		
		switch (opcion){
			case 'A':
				for(int i = 1; i < 11; i++){
					pila.insertar(i - 1);
				}
			case 'B':
				pila.mostrar();
				break;
			case 'C':
				cout << "Vacio" << endl;
				break;
			case 'D':
				for (int i = 1; i < 11; i++){
					Aficionado aux = pila.extraer();
					if (aux.getSocio()){
						cola_soc.insertar(aux);
					} 
					else{
						cola_sim.insertar(aux);
					}
				}
				cout << "Se han insertado los elementos en la cola correctamente. " << endl;
				break;
			case 'E':
				cout << "El contenido de la cola de socios es: " << endl;
				cola_soc.mostrar();
				break;
			case 'F':
				cout << "El contenido de la cola de simpatizantes es: " << endl;
				cola_sim.mostrar();
				break;
			case 'G':
				cout << "Vacio" << endl;
				break;
			case 'H':
				cout << "Vacio" << endl;
				break;
			case 'I':
				cout << "Vacio" << endl;
				break;
			case 'J':
				cout << "Vacio" << endl;
				break;
			case 'K':
				system("cls");
				break;
				
				
			
				
				
			
			case 'N':
				for(int i = 1; i < 11; i++){
					pila.insertar(i - 1);
					pila.mostrar();
				}	
		
	
	
				for (int i = 1; i < 11; i++){
					Aficionado aux = pila.extraer();
					if (aux.getSocio()){
						cola_soc.insertar(aux);
					} 
					else{
						cola_sim.insertar(aux);
					}
				}
				cout << endl;
				cout << "El contenido de la cola de socios es: " << endl;
				cola_soc.mostrar();
				cout << "El contenido de la cola de simpatizantes es: " << endl;
				cola_sim.mostrar();
				break;
		}
	
	} while (opcion!= 'S');
	
	return 0;
	
}
