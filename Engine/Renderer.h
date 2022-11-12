#pragma once
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<iostream>
class Engine
{
    public:
    void window();
    void ogl_init();
    void mainloop();
    void cleanup();
    private:
    
};