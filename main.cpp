#include <iostream>
#include "Escenario.h"
#include "Jugador.h"
#include <string>
#include <ncurses.h>
#include "Item.h"
#include "Bombas.h"
#include "Tren.h"
#include "Espina.h"
#include "V.h"
#include "Normal.h"
#include "Invisible.h"

int main(){
	string nombre,tab;
	int ttablero;
	cout<<"Ingrese su nombre:"<<endl;
	cin>>nombre;
	cout<<"Ingrese el nombre del tablero"<<endl;
	cin>>tab;
	Escenario* scene;
	cout<<"Ingrese el tipo de tablero[1.invisible/2.Tren]"<<endl;
	cin>>ttablero;
	switch(ttablero){
		case 1:
			scene=new Invisible(tab);
			break;
		case 2:
			scene=new Tren(tab);
	}
	Jugador* player=new Jugador(0,0,'P',nombre,"Princ",true);
	Jugador* bot1=new Jugador(0,12,'Q',"op","bot",true);
	Jugador* bot2=new Jugador(10,0,'F',"pop","bot",true);
	Jugador* bot3=new Jugador(10,12,'Z',"pap","bot",true);
	Jugador* bot4=new Jugador(5,6,'X',"pup","bot",true);
	scene->setItem(player,0,0);
	scene->setItem(bot1,0,12);
	scene->setItem(bot2,10,0);
	scene->setItem(bot3,10,12);
	scene->setItem(bot4,5,6);
	initscr();
	keypad(stdscr,TRUE);
	cbreak();
	getch();
	nodelay(stdscr,TRUE);
	clear();
	halfdelay(5);
	refresh();
	for(int i=0;i<11;i++){
		for(int j=0;j<13;j++){
			printw("%c",scene->getTablero()[i][j]->getFigura());
		}
		printw("%s","/n");

	}
	getch();
	endwin();
}
