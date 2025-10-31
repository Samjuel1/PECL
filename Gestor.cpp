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

void Gestor::opcionC(Pila& pila){
    if (pila.getLongitud() == 0){
        cout << "La pila esta vacia" << endl;
    }
    else{
        while (pila.extraer().getId() != 0){
            continue;
        }
        cout << "Usuarios eliminados de la pila correctamente. " << endl;
    }
}

void Gestor::opcionD(Cola& cola_soc, Cola& cola_sim, Pila& pila){
    if (pila.getLongitud() == 0){
        cout << "La pila esta vacia" << endl;
    }
    else{
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
}

void Gestor::opcionE_F(Cola& cola, string texto){
    if (cola.getLongitud() == 0){
        cout << "La cola de " << texto << "s esta vacia" << endl;
    }
    else{
        cout << "El contenido de la cola de " << texto << "s es: " << endl;
        cola.mostrar();
    }
}

void Gestor::opcionG(Cola& cola_soc, Cola& cola_sim){
    while (cola_soc.eliminar().getId() != 0 || cola_sim.eliminar().getId() != 0){
        continue;
    }
    cout << "Usuarios eliminados de las colas correctamente. " << endl;
}
void Gestor::opcionH(Cola& cola_soc, Cola& cola_sim, Lista& lista){
    while (cola_soc.getLongitud() > 0){
        lista.insertarOrdenado(cola_soc.eliminar());
    }
    cout << "se ha completado el comando para la cola de socios" << endl;
    
    while (cola_sim.getLongitud() > 0){
        lista.insertarOrdenado(cola_sim.eliminar());
    }
    cout << "se ha completado el comando para la cola de simpatizantes" << endl;
    lista.mostrarLista();
}

void Gestor::opcionI(Lista& lista){
	lista.mostrarPrimero();
	lista.mostrarUltimoSoc();
	lista.mostrarUltimoCola();
}

void Gestor::opcionJ(Lista& lista, Cola& cola_soc, Cola& cola_sim, Pila& pila){
	lista.eliminar();
	while (cola_soc.eliminar().getId() != 0){
		continue;
	}
	while (cola_sim.eliminar().getId() != 0){
		continue;
	}
	while (pila.extraer().getId() != 0){
		continue;
	}
}

void Gestor::opcionK(Lista& lista){
	lista.mostrarLista();
}

void Gestor::opcionL(){
	system("cls");
}