#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "cinder/params/Params.h"
#include "Fighter.h"
#include "KeyboardHandler.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class OpenGL_BulletHellApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void keyDown(KeyEvent event) override;
	void keyUp(KeyEvent event) override;
	void update() override;
	void draw() override;
	Fighter player;
	KeyboardHandler keyboard_handler;

	params::InterfaceGl mParams;

};

void OpenGL_BulletHellApp::setup()
{
	player.setup();
	mParams = params::InterfaceGl("Parameters", glm::ivec2(225, 200));
	mParams.addParam<float>("Velocity X", &player.velocity_.x);
	mParams.addParam<float>("Velocity Y", &player.velocity_.y);
	mParams.addParam<float>("Position X", &player.position_.x);
	mParams.addParam<float>("Position Y", &player.position_.y);
	mParams.addParam<bool>("Direction left", &player.control_direction_.left);
	mParams.addParam<bool>("Direction right", &player.control_direction_.right);
}

void OpenGL_BulletHellApp::mouseDown( MouseEvent event )
{
}

void OpenGL_BulletHellApp::keyDown( KeyEvent event )
{
	keyboard_handler.keyDown(event);
	player.set_direction(keyboard_handler.get_direction());
	
}

void OpenGL_BulletHellApp::keyUp(KeyEvent event)
{
	keyboard_handler.keyUp(event);
	player.set_direction(keyboard_handler.get_direction());
}

void OpenGL_BulletHellApp::update()
{
	player.update();
}

void OpenGL_BulletHellApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 

	gl::setMatricesWindow(getWindowSize());
	player.draw();
	mParams.draw();

}

CINDER_APP( OpenGL_BulletHellApp, RendererGl )
