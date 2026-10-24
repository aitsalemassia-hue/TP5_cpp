

#include "Boite.h"
#include<string>
int Boite::nbBoites=0;
Boite::Boite(double longueur,double largeur ,double hauteur):longueur(longueur),largeur(largeur),hauteur(hauteur){
	++nbBoites;
}
int Boite::getNombreBoites(){
	return nbBoites;

}

Boite::~Boite() {
	nbBoites--;
}

