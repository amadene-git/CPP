#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <algorithm>


class Span
{
    private:
        Span();
        std::vector<int> _vect;
        unsigned int    _N;
    
    public:
        Span(unsigned int N);
        Span(Span const & src);
        Span    &operator=(Span const &rhs);
        int     &operator[](unsigned int const & i);

        unsigned int    const  &             getN() const;
        std::vector<int>::iterator      getBegin();
        std::vector<int>::iterator      getEnd();
        
        
        void            addNumber(int nbr);
        void            addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int             longestSpan();
        int             shortestSpan();


    class   SpanOversizedException : public std::exception
    {virtual const char *what() const throw();};
    class   SpanNoEnoughtElementException : public std::exception
    {virtual const char *what() const throw();};

};

#endif