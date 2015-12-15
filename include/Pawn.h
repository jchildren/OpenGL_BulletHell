#pragma once
#include "Actor.h"
#include "Direction.h"

class Pawn : public Actor
{
public:
	Pawn();
	~Pawn();
	virtual void setup();
	virtual void update();
	virtual void draw();

	Direction control_direction_;
	
	void set_direction(Direction new_direction);
};

