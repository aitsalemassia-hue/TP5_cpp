

#include "Utilisateur.h"
#include<iostream>
#include <string>
int Utilisateur::nbUtilisateursConnectes=0;
Utilisateur::Utilisateur(const std::string& nom,const std::string& role):nom(nom),role(role) {
	++nbUtilisateursConnectes;

}
int Utilisateur::getNbUtilisateursConnectes(){
	return nbUtilisateursConnectes;
}


Utilisateur::~Utilisateur() {
	nbUtilisateursConnectes--;
}

