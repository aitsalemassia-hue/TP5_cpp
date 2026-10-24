

#ifndef EXERCICE2_PRODUIT_H_
#define EXERCICE2_PRODUIT_H_
#include<string>

class Produit {
private :
	std::string nom;
	float prixHT;
	static float tauxTVA;

public:
	Produit(const std::string& nom,float prixHT);
	float getPrixTTC();
	static  void modifierTVA(float nouveau);
	std::string getNom() const;
	virtual ~Produit();
};

#endif /* EXERCICE2_PRODUIT_H_ */
