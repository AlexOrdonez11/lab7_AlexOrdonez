#include <string>
#include "Jugador.h"
#include"Item.h"
#include <time.h>
#include<stdlib.h>

Jugador::Jugador(){
	
}
Jugador::Jugador(int x,int y,char l,string nombre,string tipo,bool vivo):Item(x,y,l){
	this->nombre=nombre;
	this->tipo=tipo;
	this->vivo=vivo;
	srand(time(NULL));
	this->vidas=rand() % 3+1 ;
}
string Jugador::getNombre(){
	return nombre;
}
string Jugador::getTipo(){
	return tipo;
}
int Jugador::getVidas(){
	return vidas;
}
bool Jugador::isVivo(){
	return vivo;
}

