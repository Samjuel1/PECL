#ifndef AFICIONADO_HPP
#define AFICIONADO_HPP

#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class Aficionado
{
public:

    Aficionado() : id(0){}
	Aficionado(int n);
	~Aficionado();
	
	int generarId(int n);
	int generarMinuto();
	bool comprobarSocio(int id);
	void mostrar();
	bool getSocio();
	int getId();
    int getMinutos();

private:
int id;
int minutos;
bool socio;
};

#endif // AFICIONADO_HPP
