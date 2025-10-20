#ifndef GESTOR_HPP
#define GESTOR_HPP

#include <string>
#include <iostream>
#include "Aficionado.hpp"
#include "Cola.hpp"
#include "Pila.hpp"

using namespace std;

class Gestor
{
public:
	Gestor();
	~Gestor();
	
	void determinarCola(Aficionado v, Cola cola_soc, Cola cola_sim);
    void opcionA(Pila& pila);
    void opcionB(Pila& pila);
    void opcionD(Cola& cola_soc, Cola& cola_sim, Pila& pila);
    void opcionE_F(Cola& cola, string texto);
	

};

#endif // GESTOR_HPP
