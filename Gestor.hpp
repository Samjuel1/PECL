#ifndef GESTOR_HPP
#define GESTOR_HPP

#include "Aficionado.hpp"
#include "Cola.hpp"

class Gestor
{
public:
	Gestor();
	~Gestor();
	
	void determinarCola(Aficionado v, Cola cola_soc, Cola cola_sim);
	

};

#endif // GESTOR_HPP
