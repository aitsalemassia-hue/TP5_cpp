

#include "Produit.h"
float Produit::tauxTVA = 0.2;
Produit::Produit(const std::string& nom,float prixHT):nom(nom),prixHT(prixHT) {
}

void Produit::modifierTVA(float nouveau){
	tauxTVA=nouveau;
}


float Produit::getPrixTTC(){

	return prixHT+(prixHT*tauxTVA);
}


Produit::~Produit() {
	// TODO Auto-generated destructor stub
}

