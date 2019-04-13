#include "vehiculeUrgence.h"

VehiculeUrgence::VehiculeUrgence():Vehicule()
{
}

VehiculeUrgence::VehiculeUrgence(const VehiculeUrgence &inVehicule):Vehicule(inVehicule)
{
}

VehiculeUrgence::~VehiculeUrgence()
{
}
bool VehiculeUrgence::initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY)
{
	return false;
}
string VehiculeUrgence::afficherSymbole()
{
	return "";
}
int VehiculeUrgence::afficherX()
{
	return 0;
}
int VehiculeUrgence::afficherY()
{
	return 0;
}
bool VehiculeUrgence::deplacement(int inX, int inY, int inPosDepartX, int inPosDepartY)
{

	return false;

}
