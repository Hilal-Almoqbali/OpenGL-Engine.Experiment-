#include<Renderer.h>
const char *vertexShaderSource = "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
    "}\0";

const char *fragmentShaderSource = "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
    "}\n\0";
unsigned int compile_shader(char* ShaderSource,unsigned int glshadertype);
struct r_input
{
    //int size(float *input)
    //{
    //    return (int)sizeof(input);
    //}
    //int vert_width;
    unsigned int v_shader;
    unsigned int f_shader;
    //float vertices[vert_width];
    //unsigned int indices[];
};


r_input test()
{
    r_input data;
    
    //data.vert_width = data.size(vertices);
    //data.vertices[]=vertices;
    //free(vertices);
    data.v_shader=compile_shader(vertexShaderSource,GL_VERTEX_SHADER);
    data.f_shader=compile_shader(fragmentShaderSource,GL_FRAGMENT_SHADER);

}

unsigned int compile_shader(const char* ShaderSource,unsigned int glshadertype)
{
unsigned int Shader = glCreateShader(glshadertype);
glShaderSource(Shader, 1, &ShaderSource, NULL);
glCompileShader(Shader);
return Shader;
}

float vertices[] =
    {-0.5f, -0.5f, 0.0f,
      0.5f, -0.5f, 0.0f,
      0.0f,  0.5f, 0.0f };