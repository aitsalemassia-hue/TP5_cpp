

#ifndef BOITE_H_
#define BOITE_H_

class Boite {
private:
	double longueur;
	double largeur;
	double hauteur;
	static int nbBoites;

public:
	Boite(double longueur,double largeur ,double hauteur);
	static int getNombreBoites();
	virtual ~Boite();
};

#endif /* BOITE_H_ */
