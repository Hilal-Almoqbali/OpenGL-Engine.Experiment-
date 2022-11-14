#pragma once
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "imgui/imgui.h"
#include "imgui/imgui_impl_glfw.h"
#include "imgui/imgui_impl_opengl3.h"
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

    void gui_init()
    {
      IMGUI_CHECKVERSION();
      ImGui::CreateContext();
      ImGuiIO& io = ImGui::GetIO(); (void)io;
      ImGui::StyleColorsDark();
      ImGui_ImplGlfw_InitForOpenGL(m_window, true);
      ImGui_ImplOpenGL3_Init("#version 130");
    }
    void gui_frame()
    {
      ImGui_ImplOpenGL3_NewFrame();
      ImGui_ImplGlfw_NewFrame();
      ImGui::NewFrame();
      gui();
      ImGui::Render();
      ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    }
    void gui()
    {
      ImGui::Begin("Hello, gui!");
      ImGui::Text("This is some useful text.");
      ImGui::End();
    }
};
