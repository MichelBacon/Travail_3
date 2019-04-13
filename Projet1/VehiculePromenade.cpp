#include "VehiculePromenade.h"


VehiculePromenade::VehiculePromenade():Vehicule()
{

}

VehiculePromenade::VehiculePromenade(const VehiculePromenade&inVehiculePromenade):Vehicule(inVehiculePromenade)
{
}

VehiculePromenade::~VehiculePromenade()
{
}
bool VehiculePromenade::initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY) 
{
	bool valeur = false;

	if (inVitesse == 1 || inVitesse == 2) 
	{
		if (inImmatriculation[0] == 'P') 
		{
			if (inX >= 0 && inY >= 0) 
			{
				vitesseVehicule = inVitesse;
				immatriculation = inImmatriculation;
				positionVehicule.setPosition(inX, inY);
				valeur = true;
			}
		}
	}

	return valeur;
}
string VehiculePromenade::afficherSymbole()
{
	return "{-}";
}
int VehiculePromenade::afficherX()
{
	return positionVehicule.getPositionX();
}
int VehiculePromenade::afficherY()
{
	return positionVehicule.getPositionY();;
}
bool VehiculePromenade::deplacement(int inX, int inY,int inPosDepartX, int inPosDepartY)
{
	bool finDeplacement=true;
	int X = positionVehicule.getPositionX();
	int Y = positionVehicule.getPositionY();
	int a = 0;
	int b = 0;

	

		if (inPosDepartX >inX)
		{
			if (inX < X)
			{

				if (inY - Y != 0 || inX - X != 0)
				{

					a = ((inY - Y) / (inX - X));
					b = Y - (a*X);
					X -= vitesseVehicule;
					Y = round((a*X) + b);
					positionVehicule.setPosition(X, Y);
					finDeplacement = false;
				}
			}
		}
		else 
		{
			if (inX > X)
			{

				if (inY - Y != 0 || inX - X != 0)
				{
					a = ((inY - Y) / (inX - X));
					b = Y - (a*X);
					X += vitesseVehicule;
					Y = round((a*X) + b);
					positionVehicule.setPosition(X, Y);
					finDeplacement = false;
				}
			}
		}
	
	
	
	return finDeplacement;

}