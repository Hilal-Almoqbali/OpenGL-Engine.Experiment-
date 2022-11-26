#pragma once
#include <cstdio>
#include <iostream>
#include <sstream>
#include <GLFW/glfw3.h>
	struct WindowProps {

		const char* Title;

		unsigned int Width;
		unsigned int Height;
		WindowProps(const char* title = "Experiment engin", unsigned int width = 1280, unsigned int height = 720)
			:Title(title), Width(width), Height(height) {}

	};

class window
{
  public:
    void windowinit();
    void windowframe();

    GLFWwindow* windowstat();
    bool isitrunning();

  private:
    GLFWwindow* m_window;
    WindowProps winprops;
};

