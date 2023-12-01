#include <iostream>
#include "math_utils.h"



int main(){

    int length;
    int width;
    std::cout << "Input a width" << std::endl;
    std::cin >> width;
    std::cout << "Input a length" << std::endl;
    std::cin >> length;

    std::cout << "This is the area of the rectangle: " << MATH_UTILS::area(length, width);

    return 0;

}

/*
To complie this program on the command line:

>>> g++ main.cpp math_utils.cpp -o mult_file.exe; ./multfile.exe
>>> g++ -c main.cpp math_utils.cpp -o mult_file.exe; ./multfile.exe

Add the '-c' to get object code.

The purpose of the object code (the *.o files) is to reduce
redundancy in recompiling.

If only one program is changed, then all other supplementary files\
do not need to be recompiled. The makefile thing, using
>>> make
as a command on the command line, will check to see what needs
to be recompiled.

Using another command,
>>> make clean
will remove the *.o object files.

*/