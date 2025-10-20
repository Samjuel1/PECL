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

void Gestor::opcionA(Pila& pila){
    for (int i = 1; i < 11; i++){
        pila.insertar(i-1);
    }
}

void Gestor::opcionB(Pila& pila){
    pila.mostrar();
}

void Gestor::opcionD(Cola& cola_soc, Cola& cola_sim, Pila& pila){
    for (int i = 1; i < 11; i++){
        Aficionado afic = pila.extraer();
        if (afic.getSocio()){
            cola_soc.insertar(afic);
        }
        else{
            cola_sim.insertar(afic);
        }
    }
    cout << "Se han insertado corectamente todos los aficionados" << endl;
}

void Gestor::opcionE_F(Cola& cola, string texto){
    cout << "El contenido de la cola de " << texto << "s " << "es: " << endl;
    cola.mostrar();
}