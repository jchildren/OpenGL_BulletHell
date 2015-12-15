#include "..\include\Fighter.h"



Fighter::Fighter()
{
	velocity_ = glm::vec2(0.0f, 0.0f);
	position_ = glm::vec2(50.0f, 50.0f);
}


Fighter::~Fighter()
{
}


void Fighter::setup()
{
	auto img = loadImage(loadAsset("fighter.jpg"));
	texture_ = gl::Texture2d::create(img);
	control_direction_.set_all(false);
}


void Fighter::update()
{
	
	if (control_direction_.left)
	{
		velocity_ += glm::vec2(-0.25f, 0.0f);
	}
	if (control_direction_.right)
	{
		velocity_ += glm::vec2(0.25f, 0.0f);
	}
	if (control_direction_.down)
	{
		velocity_ += glm::vec2(0.0f, 0.25f);
	}
	if (control_direction_.up)
	{
		velocity_ += glm::vec2(0.0f, -0.25f);
	}

	if (length(velocity_) >= 4.0f)
	{
		velocity_ = normalize(velocity_) * length(velocity_) * 0.75f;
	}
	else if (length(velocity_) >= 5.0f)
	{
		velocity_ = normalize(velocity_) * 5.0f;
	}
	else if(length(velocity_) > 0.0f) 
	{
		velocity_ = normalize(velocity_) * length(velocity_) * 0.95f;
	}
	
	position_ += velocity_;
}


void Fighter::draw()
{
	Rectf draw_rect(position_.x, position_.y, texture_->getWidth() + position_.x,
		texture_->getHeight() + position_.y);
	gl::draw(texture_, draw_rect);
}
