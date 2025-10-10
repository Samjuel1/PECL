#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Aficionado.hpp"

using namespace std;

int main(int argc, char **argv)
{ 
	srand(time(0));
	for(int i = 1; i < 11; i++){
		cout << "Aficionado " << i << ": { "; 
		Aficionado p(i - 1);
		p.mostrar();
		cout << " } " << endl;
	}
	
	return 0;
}
