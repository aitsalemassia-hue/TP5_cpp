#include"Produit.h"

#include<string>
#include<iostream>

int main(){
	Produit P1("calculatrice",150);
	Produit P2("cahier",50);
	Produit P3("crayon",3);
	Produit P4("cartable",200);


	Produit produits[]={P1,P2,P3,P4};
	std::cout<<"affichage des TTC de chaque produit "<<std::endl;
	for(Produit p:produits){
		std::cout <<"le Produit :"<<p.getNom()<< " TTC :"<< p.getPrixTTC() << std::endl;
	}

	Produit::modifierTVA(0.25);
	std::cout<<"affichage des TTC de chaque produit apres modification de TVA (25%) "<<std::endl;

	for(Produit p:produits){
		std::cout <<"le Produit :"<<p.getNom()<< "TTC :"<< p.getPrixTTC() << std::endl;
		}
	return 0;

}




