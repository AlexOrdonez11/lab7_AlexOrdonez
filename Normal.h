#ifndef NORMAL_H
#define NORMAL_H
#include "Bombas.h"
#include"Item.h"

using namespace std;

class Normal:public Bombas{
	private:
		int alcance;
	public:
		Normal();
		Normal(int,int,char);
		void setAlcance();
		void Explota(Item***);
};
#endif
