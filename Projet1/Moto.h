#ifndef VehiculeM
#define VehiculeM

#pragma once
#include <string>
using namespace std;
#include "vehicule.h"



class Moto :public Vehicule
{
protected:

public:
	Moto();
	Moto(const Moto&);
	virtual ~Moto();
	bool initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY);
	virtual string afficherSymbole();
	virtual int afficherX();
	virtual int afficherY();
	virtual bool deplacement(int inX, int inY, int inPosDepartX, int inPosDepartY);
};
#endif