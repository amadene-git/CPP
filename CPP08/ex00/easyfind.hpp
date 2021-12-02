#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

class   ValueNotFoundException : public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return "Exception: ValueNotFound";
        }
};

template<typename T>
typename T::iterator    easyfind(T & cont, int needle)
{
    typename T::iterator ret = std::find(cont.begin(), cont.end(), needle);
    if (ret == cont.end())
        throw ValueNotFoundException();
    return (ret);
}


#endif