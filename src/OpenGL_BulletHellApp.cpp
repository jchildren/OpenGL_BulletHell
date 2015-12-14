#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class OpenGL_BulletHellApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void OpenGL_BulletHellApp::setup()
{
}

void OpenGL_BulletHellApp::mouseDown( MouseEvent event )
{
}

void OpenGL_BulletHellApp::update()
{
}

void OpenGL_BulletHellApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( OpenGL_BulletHellApp, RendererGl )
