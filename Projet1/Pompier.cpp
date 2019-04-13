#include"Pompier.h"

Pompier::Pompier() :VehiculeUrgence()
{

}

Pompier::Pompier(const Pompier&inPompier) : VehiculeUrgence(inPompier)
{
}

Pompier::~Pompier()
{
}
bool Pompier::initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY)
{
	bool valeur = false;

	if (inVitesse == 1 || inVitesse == 2 || inVitesse == 3)
	{
		if (inImmatriculation[0] == 'F')
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
string Pompier::afficherSymbole()
{
	return "{+}";
}
int Pompier::afficherX()
{
	return positionVehicule.getPositionX();
}
int Pompier::afficherY()
{
	return positionVehicule.getPositionY();;
}
bool Pompier::deplacement(int inX, int inY, int inPosDepartX, int inPosDepartY)
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
				X -= (vitesseVehicule * 2);
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
				X += (vitesseVehicule * 2);
				Y = round((a*X) + b);
				positionVehicule.setPosition(X, Y);
				finDeplacement = false;
			}
		}
	}



	return finDeplacement;

}
