#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Aficionado.cpp"

using namespace std;

int main(int argc, char **argv)
{ cout << "empieza" << endl;
	srand(time(0));
	cout << "hola" << endl;
	for(int i = 1; i < 10; i++){
		Aficionado p(i);
		p.mostrar();
	cout << "hola" << endl;
	}
	return 0;
}
