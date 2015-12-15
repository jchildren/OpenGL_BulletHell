#pragma once
#include "cinder\app\KeyEvent.h"
#include "Direction.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class KeyboardHandler
{
public:
	KeyboardHandler();
	~KeyboardHandler();

	void setup();
	void update();

	void keyDown(KeyEvent event);
	void keyUp(KeyEvent event);

protected:
	Direction direction;

public:
	Direction get_direction() { return direction; }
};

