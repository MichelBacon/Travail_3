#pragma once
#include "vehicule.h"

const int maxVehicule = 50;

class Donnees
{
private:
	Vehicule* flotteVehicules[maxVehicule];
	void InitialiserFlotteDepart();
public:
	Donnees();
	~Donnees();
	Vehicule* getVehicule(int);
	bool AssignerValeurs(Vehicule* inVehicule, int inX, int inY, string inImmatriculation, int inVitesse);
	bool AjouterVehicule(Vehicule*);
	bool EnleverVehicule(int);
};

