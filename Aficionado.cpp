#include "Aficionado.hpp"

Aficionado::Aficionado(int n)
{
	id = generarId(n);
	minutos = generarMinuto();
	socio = comprobarSocio(id);
}

Aficionado::~Aficionado()
{
}

int Aficionado::generarId(int n){
	int random;
		random = (n*10 + 1) +(rand() % 10);		
		cout << random << endl;
	return random;
	}

int Aficionado::generarMinuto(){
	int random = 0;
	random = rand() % 60;
	cout << random << endl;
	return random;
	}

bool Aficionado::comprobarSocio(int id){
	return (id % 2) == 0;
	}

void Aficionado::mostrar(){
	cout << "ID: " << id 
	<< ". Minuto: " << minutos
	<< ". Socio: " << (socio ? "Si" : "No")<< endl;
	}