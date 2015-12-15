#pragma once

struct Direction
{
	bool left;
	bool right;
	bool down;
	bool up;
	Direction()
	{
	left = false;
	right = false;
	down = false;
	up = false;
	}
	void set_all(bool state)
	{
		left = state;
		right = state;
		down = state;
		up = state;
	}
};