#pragma once
#include <string>
using namespace std;
#include "position.h"

class Vehicule
{
protected:
	int vitesseVehicule;
	string immatriculation;
	Position positionVehicule;
public:
	Vehicule();
	Vehicule(const Vehicule&);
	virtual ~Vehicule();
	string getImmatriculation() const;
	int getVitesse() const;
	virtual bool initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY);
	virtual string afficherSymbole();
	virtual int afficherX();
	virtual int afficherY();
	virtual bool deplacement(int inX, int inY, int inPosDepartX, int inPosDepartY);
};

