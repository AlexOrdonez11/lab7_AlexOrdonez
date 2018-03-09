#include<string>
#ifndef JUGADOR_H
#define JUGADOR_H
#include"Item.h"
using namespace std;

class Jugador:public Item{
	private:
		string nombre;
		bool vivo;
		int vidas;
		string tipo;
	public:
		Jugador();
		Jugador(int ,int ,char,string, string,bool);
		string getNombre();
		bool isVivo();
		int getVidas();
		string getTipo();
};
#endif

