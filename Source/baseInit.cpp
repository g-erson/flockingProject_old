#include "base.h"

bool Base::Init()
{
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
        return false;

    glDisable(GL_DEPTH_TEST); /* Only drawing in 2d */

    sdlWindow = SDL_CreateWindow("OpenGL",
                                SDL_WINDOWPOS_UNDEFINED,
                                SDL_WINDOWPOS_UNDEFINED,
                                640,480,
                                SDL_WINDOW_OPENGL);

    glContext = SDL_GL_CreateContext(sdlWindow);

    glViewPort(0,0, (GLsizei) 640,(GLsizei) 480);

    loadFile = new LoadFile();  
    return true;
}
