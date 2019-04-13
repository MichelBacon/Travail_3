#ifndef VehiculeP
#define VehiculeP

#pragma once
#include <string>
using namespace std;
#include "vehicule.h"



class VehiculePromenade:public Vehicule
{
protected:
	
public:
	VehiculePromenade();
	VehiculePromenade(const VehiculePromenade&);
	virtual ~VehiculePromenade();
	bool initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY);
	virtual string afficherSymbole();
	virtual int afficherX();
	virtual int afficherY();
	virtual bool deplacement(int inX, int inY, int inPosDepartX, int inPosDepartY);

};
#endif