#include "base.h"

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
