#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void    iter(T  **ptr, std::size_t const len, void (*fct)(T & param))
{
    for (std::size_t i = 0; i < len; i++)
        fct((*ptr)[i]);
}

#endif