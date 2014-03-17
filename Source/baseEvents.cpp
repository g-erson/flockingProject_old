#include "base.h"

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
