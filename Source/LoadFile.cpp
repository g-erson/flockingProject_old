#include "LoadFile.h"

LoadFile::LoadFile()
{
    temp = "";
}

std::string LoadFile::LoadFileOrThrow(std::string& input)
{
    file.clear();
    temp.clear();
    file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
    try
    {
        file.open(input.c_str());
        while(!file.eof())
            file.get();
    }
    catch(std::ifstream::failure e)
    {
        std::cout << "Error opening file\n";
    }

    std::getline(file,temp);
    return temp;
}
