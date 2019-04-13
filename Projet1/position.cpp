#include "position.h"

Position::Position()
{
	positionX = 0;
	positionY = 0;
}

Position::Position(int inX, int inY)
{
	positionX = inX;
	positionY = inY;
}
Position::Position(const Position& inPosition)
{
	positionX = inPosition.positionX;
	positionY = inPosition.positionY;
}

int Position::getPositionX() const
{
	return positionX;
}
int Position::getPositionY() const
{
	return positionY;
}
bool Position::setPosition(int inX, int inY)
{
	bool valide = false;
	if (inX>=0 && inY>=0)
	{
		positionX = inX;
		positionY = inY;
		valide = true;
	}
	return valide;
}
