
#include "Utilisateur.h"
#include <iostream>
#include <string>

int main(){
	std::cout << " le nombre des utilisateurs connectes est : "
			<<Utilisateur::getNbUtilisateursConnectes() << std::endl;


	Utilisateur utlisateur1("assiya","Admin");
	std::cout << " le nombre des utilisateurs connectes est : "
			<<Utilisateur::getNbUtilisateursConnectes() << std::endl;



	Utilisateur utlisateur2("Sara","Etudaint");
	std::cout << " le nombre des utilisateurs connectes est : "
			<<Utilisateur::getNbUtilisateursConnectes() << std::endl;


	Utilisateur utilisateur3("Soufaine","visiteur");
	std::cout << " le nombre des utilisateurs connectes est : "
			<<Utilisateur::getNbUtilisateursConnectes() << std::endl;


	Utilisateur utlisateur4("Maryam","Etudiant");
	std::cout << " le nombre des utilisateurs connectes est : "
			<<Utilisateur::getNbUtilisateursConnectes() << std::endl;




	return 0;
}
