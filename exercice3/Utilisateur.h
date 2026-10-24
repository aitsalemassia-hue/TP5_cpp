
#ifndef EXERCICE3_UTILISATEUR_H_
#define EXERCICE3_UTILISATEUR_H_
#include<iostream>
class Utilisateur {
private:
	std::string nom;
	std::string role;
	static int nbUtilisateursConnectes ;

public:
	Utilisateur(const std::string& nom,const std::string& role);
	static int  getNbUtilisateursConnectes() ;

	virtual ~Utilisateur();


};

#endif /* EXERCICE3_UTILISATEUR_H_ */
