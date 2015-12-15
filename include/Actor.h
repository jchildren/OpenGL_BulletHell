#pragma once
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

class Actor
{
public:
	Actor();
	~Actor();
	virtual void setup();
	virtual void update();
	virtual void draw();

public:
	glm::vec2 position_;
	glm::vec2 velocity_;

public:
	glm::vec2 get_position() { return position_; }
	glm::vec2 get_velocity() { return velocity_; }
};

