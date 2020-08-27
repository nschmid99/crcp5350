#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class MotionnCaptureHelloWorldApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void MotionnCaptureHelloWorldApp::setup()
{
}

void MotionnCaptureHelloWorldApp::mouseDown( MouseEvent event )
{
}

void MotionnCaptureHelloWorldApp::update()
{
}

void MotionnCaptureHelloWorldApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( MotionnCaptureHelloWorldApp, RendererGl )
