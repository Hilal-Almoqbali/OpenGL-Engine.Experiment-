#include "imgui/imgui.h"
#include "imgui/imgui_impl_glfw.h"
#include "imgui/imgui_impl_opengl3.h"



void gui_init(GLFWwindow* m_window)
    {
      IMGUI_CHECKVERSION();
      ImGui::CreateContext();
      ImGuiIO& io = ImGui::GetIO(); (void)io;
      ImGui::StyleColorsDark();
      ImGui_ImplGlfw_InitForOpenGL(m_window, true);
      ImGui_ImplOpenGL3_Init("#version 130");
    }

    void gui()
    {
      ImGui::Begin("Hello, gui!");
      ImGui::Text("This is some useful text.");
      ImGui::End();
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
