#include "Aficionado.hpp"
#include "Gestor.hpp"

Aficionado::Aficionado(int num[], int tamano)
{
	id = generarId(num, tamano);
	minutos = generarMinuto();
	socio = comprobarSocio(this->id);
}

Aficionado::~Aficionado()
{
}

int Aficionado::generarId(int num[], int tamano){
	int random;
	random = rand() % tamano;
    int idf = num[random];
    eliminarElemento(num, tamano, random);		
	return idf;
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
	
	/*int Aficionado::generarId(int n){
	int random;
		random = (n*10 + 1) +(rand() % 10);		
	return random;
	}*/