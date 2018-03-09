#include"Tren.h"
#include"Escenario.h"
#include "Item.h"
Tren::Tren(){
}
Tren::Tren(string l):Escenario(l){
	for(int i=0;i<11;i++){
		getTablero()[i]=new Item*[13];
		for(int j=0;j<13;j++){
			if(i%2!=0&&i%2!=0){
				getTablero()[i][j]->setLetra('#');
			}else{
				getTablero()[i][j]->setLetra(' ');
			}
		}
	}

	getTablero()[3][5]->setLetra('v');
	getTablero()[3][6]->setLetra('v');
	getTablero()[3][7]->setLetra('v');
	getTablero()[3][8]->setLetra('v');
	getTablero()[3][9]->setLetra('v');
	getTablero()[4][9]->setLetra('v');
	getTablero()[5][9]->setLetra('v');
	getTablero()[6][9]->setLetra('v');
	getTablero()[7][9]->setLetra('v');
	getTablero()[8][9]->setLetra('v');
	getTablero()[9][9]->setLetra('v');
	getTablero()[9][8]->setLetra('v');
	getTablero()[9][7]->setLetra('v');
	getTablero()[9][6]->setLetra('v');
	getTablero()[9][5]->setLetra('V');
	
}
void Tren::Carrito(){
}
