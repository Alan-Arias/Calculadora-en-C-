//---------------------------------------------------------------------------

#pragma hdrstop

#include "UNodo.h"
#include <stdio.h>
typedef int Tipo;
struct Nodo{
	Tipo Data;
	Nodo *Link;
};
typedef Nodo *Puntero;
const TIERRA = NULL;
void CrearNodo(Puntero &p)
{
	p=new Nodo;
}
bool AlmacLleno()
{
    Puntero aux;
	aux=new Nodo;
	if (aux == NULL) {
		return true;
	}else{
		delete aux;  //libera memoria pedida para aux
		return false;
	}
}
void Retornar(Puntero &p)
{
	delete p;
}
Tipo Data(Puntero p)
{
	return (*p).Data;
}
Puntero Link(Puntero p)
{
	return (*p).Link;
}
void PonerData(Puntero &p, Tipo valor)
{
	(*p).Data=valor;
}
void PonerLink(Puntero &p, Puntero q)
{
    (*p).Link=q;
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
