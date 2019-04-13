#include "vehicule.h"

Vehicule::Vehicule():positionVehicule()
{
	immatriculation = "";
	vitesseVehicule = 0;
}

Vehicule::Vehicule(const Vehicule &inVehicule):positionVehicule(inVehicule.positionVehicule)
{
	immatriculation = inVehicule.immatriculation;
	vitesseVehicule = inVehicule.vitesseVehicule;
}

Vehicule::~Vehicule()
{
}

int Vehicule::getVitesse() const
{
	return vitesseVehicule;
}

string Vehicule::getImmatriculation() const
{
	return immatriculation;
}
bool Vehicule::initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY)
{
	return false;
}
string Vehicule::afficherSymbole()
{
	return "";
}
int Vehicule::afficherX()
{
	return 0;
}
int Vehicule::afficherY()
{
	return 0;
}
bool Vehicule::deplacement(int inX, int inY, int inPosDepartX, int inPosDepartY)
{
	
	return false;

}
