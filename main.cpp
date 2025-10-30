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
		
		cout << "\n\t--------------------------------------------------------------"
				"--------\n";
		cout << "\tAficionados en la pila -> \n\t";  gestor.opcionB(pila);
		cout << "\n\tAficionados en las colas:\n \tSocios-> "; gestor.opcionE_F(cola_soc, "socio"); cout << "\tSimpatizantes-> ";
				gestor.opcionE_F(cola_sim, "simpatizante");
		cout << "\n\tAficionados en la lista -> " << endl;;  /*gestor.AficionadosEnLista()*/
		cout << "\n\tAficionados en el arbol -> ";							  /*gestor.AficionadosEnArbol()*/
		cout << "\n";
		cout << "\t----------------------------------------------------------------"
				"------\n\n";

		cout << "\tA. Generar 10 Aficionados de forma aleatoria y almacenarlos en la "
				"Pila.\n";
		cout << "\tB. Consultar todos los Aficionados generados en la Pila.\n";
		cout << "\tC. Borrar los Aficionados generados en la pila.\n";
		cout << "\tD. Simular llegada de los Aficionados en las colas.\n";
		cout << "\tE. Consultar los Aficionados en las cola de socios.\n";
		cout << "\tF. Consultar los Aficionados en la cola de simpatizantes.\n";
		cout << "\tG. Borrar todos los Aficionados de las colas.\n";
		cout << "\tH. Simular la entrada de los Aficionados a la lista.\n";
		cout << "\tI. Buscar en la lista el primer Aficionado, "
				"el ultimo socio, el primer simpatizante y "
				"el ultimo Aficionado que \n\tacceden al estadio.\n";
		cout << "\tJ. Reiniciar el programa.\n";
		cout << endl;
		
		
		cout << "Indique la opcion deseada: " << endl;
		cin >> opcion;
		cout << endl;
		opcion = toupper(opcion);
		
		
		
		switch (opcion){
			case 'A':
				for(int i = 1; i < 11; i++){
					pila.insertar(i - 1);
				}
				break;
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
				gestor.opcionI(lista);
				break;
			case 'J':
                gestor.opcionJ(lista);
				break;
			case 'K':
				gestor.opcionK(lista);
				break;
			case 'L':
				system("cls");
				break;
				
			
		}
	} while (opcion!= 'S');
	
	return 0;
	
}
