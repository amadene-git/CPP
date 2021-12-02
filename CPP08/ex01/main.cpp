#include <iostream>
#include <exception>
#include <algorithm>
#include "span.hpp"

void    print(int & i)
{
    std::cout << i << " ";
}


int main()
{

    {
        std::cout << "Main42 - test ******************" << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        std::cout << "Main42 - test ******************" << std::endl;
    }
    
    srand(time(NULL));
    unsigned int N = rand() % 1000;

    Span var(N);
    std::cout << "Size :" << var.getN() << std::endl << std::endl;
   
    try
    {
        for (unsigned int i = 0; i < N; i++)
            var.addNumber(rand() % 1000 - 500);
        var[0] = 42;
        for_each (var.getBegin(), var.getEnd(), print);
        std::cout << std::endl << std::endl;
        std::cout << "min :" << *std::min_element(var.getBegin(), var.getEnd()) << std::endl;
        std::cout << "max :" << *std::max_element(var.getBegin(), var.getEnd()) << std::endl;
        std::cout << "longestSpan :" << var.longestSpan() << std::endl;
        std::cout << "shortestSpan :" << var.shortestSpan() << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    Span copy(N);
    try
    {
        
        copy.addNumber(var.getBegin(), var.getBegin() + 12);
        for_each (copy.getBegin(), copy.getEnd(), print);
        std::cout << std::endl << "Longest :" << copy.longestSpan() << std::endl;
        std::cout << "Shortest :" << copy.shortestSpan() << std::endl << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    Span null(0);
    try
    {
        
        null.addNumber(42);
        for_each (copy.getBegin(), copy.getEnd(), print);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return (0);
}