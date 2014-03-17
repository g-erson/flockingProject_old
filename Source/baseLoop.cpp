#include "base.h"

void Base::Loop()
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
    Render();
    SDL_GL_SwapWindow(sdlWindow);
}
