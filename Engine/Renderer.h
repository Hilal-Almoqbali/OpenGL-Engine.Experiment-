#pragma once
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include <glm/glm/glm.hpp>
#include <glm/glm/gtc/matrix_transform.hpp>
#include <glm/glm/gtc/type_ptr.hpp>
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