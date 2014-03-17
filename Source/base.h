#ifndef _BASE_H_
    #define _BASE_H_

#include <SDL2/SDL.h>
#include <GL/glew.h>
#include "LoadFile.h"

class Base
{
    private:
        LoadFile* loadFile;

        bool running;

        SDL_Window* sdlWindow;        

        SDL_GLContext glContext;

        SDL_Event events; 

    public:
        Base();
    
        int Execute();

        bool Init();

        void Loop();

        void Render();

        void Events(SDL_Event* events);
        
        void Cleanup();
};

#endif
