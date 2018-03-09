#include "Invisible.h"
#include"Escenario.h"

Invisible::Invisible(){

}
Invisible::Invisible(string nombre):Escenario(nombre){
	for(int i=0;i<11;i++){
		getTablero()[i]=new Item*[13];
		for(int j=0;j<13;j++){
			if(i%2!=0&&j%2!=0){
				getTablero()[i][j]->setLetra('#');
			}else{
				getTablero()[i][j]->setLetra(' ');
			}
		}
	}
}
void Invisible::invisibles(){
	for(int i=0;i<getBombas().size();i++){
		if(i%2==0){
			getBombas()[i]->setLetra(' ');
		}else{
			getBombas()[i]->setLetra('B');
		}
	}
}
