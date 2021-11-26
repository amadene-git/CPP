#ifndef MAIN_HPP
# define MAIN_HPP

#include <stdint.h>
#include <iostream>
typedef struct Data
{
    int i;
    std::string str;
    typedef Data *other;
}               Data;

#endif