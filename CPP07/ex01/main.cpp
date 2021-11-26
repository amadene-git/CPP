#include "iter.hpp"
#include <cstdlib>

void    randomize(int & i)
{
    i = rand() % 10 + 1;
}
void    print_int(int & i)
{
    std::cout << i << std::endl;
}

template<typename T>
void    clear(T & foo)
{
    foo = 0;
}


int main()
{
    int *array = new int [10];
    srand(time(NULL));

    iter(&array, 10, randomize);
    iter(&array, 10, print_int);
    std::cout << "clear..." << std::endl;
    iter(&array, 10, clear);
    iter(&array, 10, print_int);


    delete [] array;
    return (0);
}