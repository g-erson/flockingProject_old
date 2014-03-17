#include "base.h"

Base::Base()
{
    running = true;
}

int Base::Execute()
{
    if(Init() == false)
    {
        std::cout << "Error initialising SDL\n";
        running = false;
    }

    while(running)
    {
        Loop();

        Events(&events);
    }

    Cleanup();

    return 0;
}

void Base::Events(SDL_Event* events)
{
    while(SDL_PollEvent(events))
    {
        switch(events->type)
        {
            case SDL_QUIT:
                running = false;
                break;
        }
    }
}

void Base::Loop()
{
    glClearColor(0,0,0,1);
    glClear(GL_COLOR_BUFFER_BIT);
    SDL_GL_SwapWindow(sdlWindow);
}

void Base::Cleanup()
{
}

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

    loadFile = new LoadFile();  
    return true;
}
