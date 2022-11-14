#include<Renderer.h>

int main(void)
{
    Engine app;
    app.window("hello window!",800,600);
    app.ogl_init();
    app.mainloop();
    app.cleanup();
    
}
