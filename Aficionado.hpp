#ifndef AFICIONADO_HPP
#define AFICIONADO_HPP

#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Gestor.hpp"

using namespace std;

class NodoPila;

class Aficionado
{
public:
	Aficionado();
	Aficionado(int num[], int tamano);
	~Aficionado();
	
	int generarId(int num[], int tamano);
	int generarMinuto();
	bool comprobarSocio(int id);
	void mostrar();

private:
int id;
int minutos;
bool socio;
};

#endif // AFICIONADO_HPP
