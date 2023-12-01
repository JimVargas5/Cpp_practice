// this is the header file
// this is a supplementary file 
// this file contains declarations and data types


/*
These lines tell the processor to define the contents of this
file if they have not been defined already.
This saves the code from potentially being included twice.
*/
#ifndef MATH_UTILS
#define MATH_UTILS


struct Rectangle{
    double length;
    double width;
};

double area(double length, double width);


#endif