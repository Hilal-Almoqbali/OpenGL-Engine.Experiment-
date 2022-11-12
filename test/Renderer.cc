#include<Renderer.h>

void Engine::ogl_init()
{
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
{
    std::cout << "Failed to initialize GLAD" << std::endl;
    //return -1;
}    
}

void Engine::window(const char* name,int width,int height)
    
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    Engine::m_window = glfwCreateWindow(width, height, name, NULL, NULL);
    
if (m_window == NULL)
{
    std::cout << "Failed to create GLFW window" << std::endl;
    glfwTerminate();
    //return -1;
}
glfwMakeContextCurrent(Engine::m_window);
}

void Engine::mainloop()
{
while(!glfwWindowShouldClose(Engine::m_window))
{
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glfwSwapBuffers(Engine::m_window);
    glfwPollEvents();    
}
}

void Engine::cleanup()
{
glfwTerminate();
//return 0;
}