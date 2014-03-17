#ifndef _LOADFILE_H_
    #define _LOADFILE_H_

#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

class LoadFile
{
    private:
        std::ifstream file;

        std::string temp;

    public:
        LoadFile();

        std::string LoadFileOrThrow(std::string&);        
};
#endif
