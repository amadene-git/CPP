#include <cstdlib>//rand()
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>//find(), for_each()
#include <easyfind.hpp>

void    randomize(int & i)
{
    i = rand() % 1000 - 500;
}

void    print_cont(int const & i)
{
    std::cout << i << ' ';
}

int main()
{
    srand(time(NULL));
    int size = rand() % 1000;

    //create list and vector
    std::vector<int> vect;
    std::list<int> lst;
    for (int i = 0; i < size; i++)
    {
        vect.push_back(0);
        lst.push_back(0);
    }
    for_each(vect.begin(), vect.end(), randomize);
    std::copy(vect.begin(), vect.end(), lst.begin());

    int needle = rand() % 1000 - 500;
    std::cout << "size = " << size << "; needle = " << needle << std::endl << std::endl;
    
    std::cout << "Vector :";
    for_each (vect.begin(), vect.end(), print_cont);
    std::cout << std::endl << std::endl;
    
    std::cout << "List :";
    for_each (lst.begin(), lst.end(), print_cont);
    std::cout << std::endl << std::endl;
  

    try {
        std::cout << "Vector: "<< *(easyfind(vect, needle)) << " is found"<< std::endl;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "List: "<< *(easyfind(lst, needle)) << " is found"<< std::endl;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }


    std::cout << std::endl << "first occurrence test:" << std::endl;

    std::vector<int> vect2;
    vect2.push_back(0);
    vect2.push_back(42);
    vect2.push_back(0);
    vect2.push_back(0);
    vect2.push_back(0);
    vect2.push_back(0);
    vect2.push_back(42);
    vect2.push_back(0);
    try
    {
        int distance = std::distance(vect2.begin(), easyfind(vect2, 42));
        std::cout << "distance ="<<  distance << std::endl;
        std::cout << vect2[distance] << std::endl; 
    }
    catch (std::exception & e){
        std::cout << "Distance "<< e.what() << std::endl;
    }

    return (0);
}