#include"Boite.h"
#include<string>
#include <iostream>

int main (){

	Boite b1(4.3,2,7);
	Boite b2(6.9,3.5,10);
	Boite b3(8.5,4,12);
	Boite b4(6,3,12);
	Boite b5(10,5,14);


	//Boite boites[10]={b1,b2,b3,b4,b5};


	int nombreTotal = Boite ::getNombreBoites();
	std::cout<<"le Nombre total des boites est : "<<nombreTotal<<std::endl;

	return 0;
}



