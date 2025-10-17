#include "Gestor.hpp"

Gestor::Gestor()
{
}

Gestor::~Gestor()
{
}

void Gestor::determinarCola(Aficionado v, Cola cola_soc, Cola cola_sim){
	if (v.getSocio()){
		cola_soc.insertar(v);
	} else{
		cola_sim.insertar(v);
	}
}

