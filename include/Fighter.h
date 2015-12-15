#pragma once
#include "Pawn.h"

#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Fighter : public Pawn
{
public:
	Fighter();
	~Fighter();
	void setup();
	void update();
	void draw();

protected:
	gl::Texture2dRef texture_;
};
