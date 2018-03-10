#include<string>
#include<vector>
#ifndef ESCENARIO_H
#define ESCENARIO_H
#include"Item.h"
#include"Bombas.h"
using namespace std;

class Escenario{
	private:
		Item*** tablero;
		vector<Bombas*> bombas;
		string nombre;
	public:
		Item*** getTablero();
		vector<Bombas*> getBombas();
		void EliminarBomba();
		void setBombas(Bombas*);
		Escenario();
		void setItem(Item*,int,int);
		Escenario(string);
		string getNombre();
};
#endif
