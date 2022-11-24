#pragma once
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include "engine_gui.h"
#include<iostream>
#include <math.h>
class Engine
{
    public:
    void window(const char* name,int width,int height);
    void ogl_init();
    void mainloop();
    void cleanup();
    private:
    GLFWwindow* m_window;

};
