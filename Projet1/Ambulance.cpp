#include "Ambulance.h"


Ambulance::Ambulance() :VehiculeUrgence()
{

}

Ambulance::Ambulance(const Ambulance&inAmbulance) : VehiculeUrgence(inAmbulance)
{
}

Ambulance::~Ambulance()
{
}
bool Ambulance::initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY)
{
	bool valeur = false;

	if (inVitesse == 1 || inVitesse == 2 || inVitesse == 3)
	{
		if (inImmatriculation[0] == 'A')
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
string Ambulance::afficherSymbole()
{
	return "{*}";
}
int Ambulance::afficherX()
{
	return positionVehicule.getPositionX();
}
int Ambulance::afficherY()
{
	return positionVehicule.getPositionY();;
}
bool Ambulance::deplacement(int inX, int inY, int inPosDepartX, int inPosDepartY)
{
	bool finDeplacement = true;
	int X = positionVehicule.getPositionX();
	int Y = positionVehicule.getPositionY();
	int a = 0;
	int b = 0;



	if (inPosDepartX > inX)
	{
		if (inX < X)
		{

			if (inY - Y != 0 || inX - X != 0)
			{

				a = ((inY - Y) / (inX - X));
				b = Y - (a*X);
				X -= (vitesseVehicule*3);
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
				X += (vitesseVehicule * 3);
				Y = round((a*X) + b);
				positionVehicule.setPosition(X, Y);
				finDeplacement = false;
			}
		}
	}



	return finDeplacement;

}