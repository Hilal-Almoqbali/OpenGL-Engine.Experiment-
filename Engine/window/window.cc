#include "window.h"
#include <window/window.h>

void window::windowinit()
  
{
m_window = glfwCreateWindow(winprops.Width, winprops.Height, winprops.Title, NULL, NULL);
if (!m_window)
    {
        glfwTerminate();
        printf("glfw create window issue");
    }

glfwMakeContextCurrent(m_window);
}

void window::windowframe()
{
glfwSwapBuffers(m_window);
glfwPollEvents();
}
GLFWwindow* window::windowstat()
{
 return m_window;
}
bool window::isitrunning()
{
return !glfwWindowShouldClose(m_window);
}
