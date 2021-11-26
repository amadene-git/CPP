#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>
#include <iostream>

template<typename T>
class Array
{
    private:
        T               *_begin;
        unsigned int    _length;
    public:
       class OversizeArrayException : public std::exception
        {
            public :
				virtual const char * what() const throw()
                {
                    return ("ArrayException: index too high");
                };
        };
      
        Array() : _begin(NULL), _length(0){};
        Array(unsigned int ui) : _begin(new T [ui]), _length(ui)
        {
            T   *tmp = new T();
            for (unsigned int i = 0; i < ui; i++)
                _begin[i] = *tmp;
            delete tmp;
        }

        Array(Array const & src) :  _begin(NULL), _length(0)
        {
            if (this != &src)
                *this = src;
        }
        
        Array   &operator=(Array const & rhs)
        {            
            if (_begin)
                delete [] _begin;
            _length = rhs.size();
            if (_length)
                _begin = new T [_length];
            else
                _begin = NULL;
            for (unsigned int i = 0; i < _length ; i++)
            {
                _begin[i] = rhs[i];
            }
            return (*this);
        }
        Array   &operator=(T const * rhs)
        {
            for (unsigned int i = 0; i < _length; i++)
            {
                (*this)[i] = rhs[i];
            }
            return (*this);
        }


        T   &operator[](unsigned int const & i) const
        {
            if (i >= _length)
                throw OversizeArrayException();
            return (_begin[i]);
        }
        

        ~Array()
        {
                delete [] _begin;
        }

        unsigned int const &size() const
        {
            return (this->_length);
        }
       
};

std::ostream	&operator<<(std::ostream &out, Array<char> const &src)
{
	for (unsigned int i = 0; i < src.size(); i++)
		out << src[i];
	return (out);
}



#endif