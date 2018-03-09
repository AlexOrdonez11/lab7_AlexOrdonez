#include "Normal.h"
#include"Bombas.h"
#include"Item.h"
Normal::Normal(){

}
Normal::Normal(int x,int y,char letra):Bombas(x,y,letra){
	setAlcance();
}
void Normal::setAlcance(){
	srand(time(NULL));
	alcance=rand()% 4+1;
}
void Normal::Explota(Item*** matriz){
	for(int i=0;i<alcance;i++){
		
	}
}
