#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Aficionado.hpp"
#include "Pila.hpp"
#include "Gestor.hpp"

using namespace std;

int main(int argc, char **argv)
{ 
	srand(time(0));
	Pila pila;
	int contador = 0;
	crearAficionados(contador,pila);
	
	return 0;
	/*cout << "Aficionado " << i << ": { "; 
		Aficionado p(i - 1);
		p.mostrar();
		cout << " } " << endl;*/
}
