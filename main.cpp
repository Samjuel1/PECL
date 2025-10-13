#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Aficionado.hpp"
#include "Pila.hpp"

using namespace std;

int main(int argc, char **argv)
{ 
	Pila pila;
	srand(time(0));
	for(int i = 1; i < 11; i++){
		pila.insertar(i - 1);
	    pila.mostrar();
	}
	
	return 0;
	/*cout << "Aficionado " << i << ": { "; 
		Aficionado p(i - 1);
		p.mostrar();
		cout << " } " << endl;*/
}
