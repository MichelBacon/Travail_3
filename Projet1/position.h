#ifndef positionH
#define positionH

class Position
{
  protected:	
    int positionX;  
	int positionY;
  public:
	  Position();
	  Position(int x, int y);
	  Position(const Position&);

    int getPositionX() const;
    int getPositionY() const;
	bool setPosition(int inX, int inY);

};

#endif
 