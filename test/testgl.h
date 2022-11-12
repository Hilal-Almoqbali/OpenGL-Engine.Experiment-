#include<Renderer.h>

struct r_input
{
    unsigned int v_shader;
    unsigned int f_shader;
    float vertices[8];
    unsigned int indices[];
};


r_input test()
{
    r_input data;
    data.vertices[8]={
    -0.5f, -0.5f, 0.0f,
     0.5f, -0.5f, 0.0f,
     0.0f,  0.5f, 0.0f};
}