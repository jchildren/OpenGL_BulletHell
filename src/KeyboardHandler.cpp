#include "..\include\KeyboardHandler.h"


KeyboardHandler::KeyboardHandler()
{

}

KeyboardHandler::~KeyboardHandler()
{

}

void KeyboardHandler::setup()
{
	direction.set_all(false);
}

void KeyboardHandler::update()
{
}

void KeyboardHandler::keyDown(KeyEvent event)
{
	switch (event.getCode())
	{
	case KeyEvent::KEY_LEFT:
		direction.left = true;
		break;
	case KeyEvent::KEY_RIGHT:
		direction.right = true;
		break;
	case KeyEvent::KEY_DOWN:
		direction.down = true;
		break;
	case KeyEvent::KEY_UP:
		direction.up = true;
		break;
	default:
		break;
	}
}

void KeyboardHandler::keyUp(KeyEvent event)
{
	switch (event.getCode())
	{
	case KeyEvent::KEY_LEFT:
		direction.left = false;
		break;
	case KeyEvent::KEY_RIGHT:
		direction.right = false;
		break;
	case KeyEvent::KEY_DOWN:
		direction.down = false;
		break;
	case KeyEvent::KEY_UP:
		direction.up = false;
		break;
	default:
		break;
	}
}
