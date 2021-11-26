#include "main.hpp"


int check_arg(std::string str)
{
    if (str.length() == 1 && !isdigit(str[0]))
        return (1);
  
    std::string tab[8] = {"nan",
                        "nanf",
                         "inf",
                         "inff",
                         "+inf",
                         "+inff",
                         "-inf",
                         "-inff"};
    for (int i = 0; i < 8; i++)
        if (str == tab[i])
            return (1);
    
    if (str.find('.') != str.rfind('.') || str.find('f') != str.rfind('f') \
    || str.find('e') != str.rfind('e')) 
        return (0);

    for (size_t i = 0; i < str.length(); i++)
        if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f' \
        && str[i] != 'e' && str[i] != '+' && str[i] != '-')
            return (0);
    return (1);
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (0);
    }
    
    std::string str = av[1];

    double  nbr;
    int     error;
    error = !check_arg(str);
    
    if (str.length() == 1 && !isdigit(str[0]))
        nbr = static_cast<double>(str[0]);
    else
        nbr = atof(str.c_str());
    
    if (error || nbr < CHAR_MIN || nbr > CHAR_MAX || isnan(nbr))
        std::cout << "char: impossible" << std::endl;
    else if ((nbr >= 0 && nbr < 31) || nbr == 127)
            std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nbr) << std::endl;

    if (error || nbr < INT_MIN || nbr > INT_MAX || isnan(nbr))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: "<< static_cast<int>(nbr) << std::endl;

    if (error)
    {
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
    else
    {
        std::ostringstream ss;
        std::string cpy;
        float f = static_cast<float>(nbr);
        double d = static_cast<double>(nbr);
        ss << f;
        cpy = ss.str();
        if (cpy.find('.') == std::string::npos && !isnan(f) && !isinf(f))
            cpy += ".0";
        cpy += "f"; 
        std::cout << "float: "<< cpy << std::endl;
        ss.clear();
        ss.str("");
        cpy.clear();

        ss << d;
        cpy = ss.str();
        if (cpy.find('.') == std::string::npos && !isnan(d) && !isinf(d))
            cpy += ".0";
        std::cout << "double: "<< cpy << std::endl;
    }

    float i = 12;
    int f = static_cast<int>(i); 
}