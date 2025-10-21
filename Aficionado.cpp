#include "Aficionado.hpp"

Aficionado::Aficionado(int n)
{
	id = generarId(n);
	minutos = generarMinuto();
	socio = comprobarSocio(this->id);
}

Aficionado::~Aficionado()
{
}

int Aficionado::generarId(int n){
	int random;
		random = (n*10 + 1) +(rand() % 10);		
	return random;
	}

int Aficionado::generarMinuto(){
	int random = 0;
	random = rand() % 60;
	return random;
	}

bool Aficionado::comprobarSocio(int id){
	return (id % 2) == 0;
	}

void Aficionado::mostrar(){
	cout << "ID: " << this->id 
	<< ". Minuto: " << this->minutos
	<< ". Socio: " << (this->socio ? "Si. " : "No. ") << endl;
	}
	
bool Aficionado::getSocio(){
	return this->socio;
}

int Aficionado::getMinutos(){
    return this->minutos;
}