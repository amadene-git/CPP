#include "span.hpp"


//Exceptions
const char *Span::SpanOversizedException::what() const throw()
{
    return ("Exception: SpanOversized");
}

const char *Span::SpanNoEnoughtElementException::what() const throw()
{
    return ("Exception: SpanNoEnoughtElement");
}


//Constructor, operator

Span::Span(unsigned int N)
{
    this->_N = N;
}

Span::Span(Span const &src) 
{
    *this = src;
}

Span &Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        this->_N = rhs._N;
        this->_vect.clear();
        this->_vect = rhs._vect;
    }
    return (*this);
}

int &    Span::operator[](unsigned int const & i)
{
    if (i >= _vect.size())
        throw Span::SpanOversizedException();
    return (this->getBegin()[i]);
}

//getter

unsigned int const &            Span::getN() const
{
    return (this->_N);
}
std::vector<int>::iterator      Span::getBegin()
{
    return (_vect.begin());
}
std::vector<int>::iterator      Span::getEnd()
{
    return (_vect.end());
}

//member functions

void    Span::addNumber(int nbr)
{
    if (_N == 0)
        throw Span::SpanNoEnoughtElementException();
    if (_vect.size() >= _N)
        throw Span::SpanOversizedException();
    _vect.push_back(nbr);
}
void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_N == 0)
        throw Span::SpanNoEnoughtElementException();
    while (begin != end)
    {
        if (_vect.size() >= _N)
            throw Span::SpanOversizedException();
        _vect.push_back(*(begin++));
    }
}

int     Span::longestSpan()
{
    if (_vect.size() == 0 || _vect.size() == 1)
        throw Span::SpanNoEnoughtElementException();
    return (*std::max_element(getBegin(), getEnd()) - *std::min_element(getBegin(), getEnd()));
}

int     Span::shortestSpan()
{
    if (_vect.size() == 0 || _vect.size() == 1)
        throw Span::SpanNoEnoughtElementException();
    Span    copy(*this);
    std::sort(copy.getBegin(), copy.getEnd());
    std::vector<int>::iterator iter = copy.getBegin();
    int ret = std::abs(*iter - *(iter + 1));
    while (++iter != copy.getEnd())
    {
        if (iter + 1 != copy.getEnd() && std::abs(*iter - *(iter + 1)) < ret)
            ret = std::abs(*iter - *(iter + 1));
    }
    return (ret);
}