#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Aficionado.hpp"
#include "Pila.hpp"
#include "Cola.hpp"
#include "Gestor.hpp"
#include "Lista.hpp"

using namespace std;

int main(int argc, char **argv)
{ 
	char opcion;

	Pila pila;
	Cola cola_soc;
	Cola cola_sim;
	Gestor gestor;
    Lista lista;
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
				gestor.opcionB(pila);
				break;
			case 'C':
                gestor.opcionC(pila);
				break;
			case 'D':
                 gestor.opcionD(cola_soc, cola_sim, pila);
				break;
			case 'E':
                 gestor.opcionE_F(cola_soc, "socio");
				break;
			case 'F':
                 gestor.opcionE_F(cola_sim, "simpatizante");
				break;
			case 'G':
				gestor.opcionG(cola_soc, cola_sim);
				break;
			case 'H':
                gestor.opcionH(cola_soc, cola_sim, lista);
				break;
			case 'I':
				lista.mostrarLista(); 
				break;
			case 'J':
                lista.mostrarPrimero();
                lista.mostrarUltimoSoc();
                lista.mostrarUltimoCola();
				break;
			case 'K':
				system("cls");
				break;
		}
	} while (opcion!= 'S');
	
	return 0;
	
}
