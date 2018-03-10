#include <string>
#include"Escenario.h"

Escenario::Escenario(){

}
Escenario::Escenario(string nombre){
	this->nombre=nombre;
}
string Escenario::getNombre(){
	return nombre;
}
vector<Bombas*> Escenario::getBombas(){
	return bombas;
}
Item*** Escenario::getTablero(){
	return tablero;
}
void Escenario::setBombas(Bombas* bomb){
	bombas.push_back(bomb);
}
void Escenario::EliminarBomba(){
	for(int i=0;i<bombas.size();i++){
		if(bombas[i]->getExplota()==0){
			delete bombas[i];
			bombas[i]=NULL;
			bombas.erase(bombas.begin()+i);
		}
	}
}
void Escenario::setItem(Item* hola,int x,int y){
	tablero[x][y]=hola;
}
