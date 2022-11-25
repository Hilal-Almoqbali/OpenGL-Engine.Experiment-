#include "Application.h"
#include <window/window.h>
namespace Engine {

	Application::Application()
	{
         
	}
	
	
	Application::~Application()
	{
	}

	
	
	
	void Application:: Run() {//game loop
      window win;
      win.windowinit();

		while (win.isitrunning())
        {
          win.windowframe();
        }
    
	}
}
