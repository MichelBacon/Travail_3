#ifndef VehiculeA
#define VehiculeA

#pragma once
#include <string>
using namespace std;
#include "vehiculeUrgence.h"

class Ambulance :public VehiculeUrgence
{
protected:

public:
	Ambulance();
	Ambulance(const Ambulance&);
	virtual ~Ambulance();
	bool initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY);
    virtual string afficherSymbole();
	virtual int afficherX();
	virtual int afficherY();
	virtual bool deplacement(int inX, int inY, int inPosDepartX, int inPosDepartY);
};
#endif