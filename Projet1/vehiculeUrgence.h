#pragma once
#include <string>
using namespace std;
#include "vehicule.h"

class VehiculeUrgence : public Vehicule
{
protected:

public:
	VehiculeUrgence();
	VehiculeUrgence(const VehiculeUrgence&);
	virtual ~VehiculeUrgence();
	virtual bool initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY);
	virtual string afficherSymbole();
	virtual int afficherX();
	virtual int afficherY();
	virtual bool deplacement(int inX, int inY, int inPosDepartX, int inPosDepartY);
};

