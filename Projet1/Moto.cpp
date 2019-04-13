#include "Moto.h"



Moto::Moto() :Vehicule()
{

}

Moto::Moto(const Moto&inMoto) : Vehicule(inMoto)
{
}

Moto::~Moto()
{
}
bool Moto::initialiserlesdonnees(int inVitesse, string inImmatriculation, int inX, int inY)
{
	bool valeur = false;

	if (inVitesse == 1 || inVitesse == 2)
	{
		if (inImmatriculation[0] == 'M')
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
string Moto::afficherSymbole()
{
	return "{^}";
}
int Moto::afficherX()
{
	return positionVehicule.getPositionX();
}
int Moto::afficherY()
{
	return positionVehicule.getPositionY();;
}
bool Moto::deplacement(int inX, int inY, int inPosDepartX,int inPosDepartY)
{
	bool finDeplacement = true;
	int X = positionVehicule.getPositionX();
	int Y = positionVehicule.getPositionY();
	bool partitrEnY = false;

	if (inPosDepartX > inX)
	{
		if (inX < X)
		{
		X -= (vitesseVehicule);
		positionVehicule.setPosition(X, Y);
		finDeplacement = false;
		}
	}
	else if(inPosDepartX < inX)
	{
		if (inX > X)
		{
		X += (vitesseVehicule);
		positionVehicule.setPosition(X, Y);
		finDeplacement = false;
		}
	}
	if(finDeplacement==true)
	{
		partitrEnY = true;
	}
		
	if (partitrEnY==true) 
	{
		if (inPosDepartY > inY)
		{
			if (inY < Y)
			{
				Y-= (vitesseVehicule);
				positionVehicule.setPosition(X, Y);
				finDeplacement = false;
			}
		}
		else if (inPosDepartY < inY)
		{
			if (inY > Y)
			{
				Y += (vitesseVehicule);
				positionVehicule.setPosition(X, Y);
				finDeplacement = false;
			}
		
		}
	}
	





	return finDeplacement;

}