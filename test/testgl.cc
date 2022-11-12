#include<testgl.h>

int main(void)
{
    Engine app;
    app.window("hello window!",800,600);
    app.ogl_init();
    app.cleanup();
    
}