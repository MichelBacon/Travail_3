#ifndef VehiculePom
#define VehiculePom

#pragma once
#include <string>
using namespace std;
#include "vehiculeUrgence.h"



class Pompier :public VehiculeUrgence
{
protected:

public:
	Pompier();
	Pompier(const Pompier&);
	virtual ~Pompier();
	bool initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY);
	virtual string afficherSymbole();
	virtual int afficherX();
	virtual int afficherY();
	virtual bool deplacement(int inX, int inY, int inPosDepartX, int inPosDepartY);
};
#endif