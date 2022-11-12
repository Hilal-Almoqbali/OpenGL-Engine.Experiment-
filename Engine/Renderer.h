#pragma once
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<iostream>
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