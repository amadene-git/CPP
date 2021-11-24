#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_materials[i] = NULL;
    std::cout << "MateriaSource Default constructor called\n";
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    if (this != &src)
        *this = src;
    std::cout << "MateriaSource Copy constructor called\n";
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Default destructor called\n";
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    for (int i = 0; i < 4; i++)
        if (this->_materials[i])
            delete this->_materials[i];
    for (int i = 0; i < 4; i++)
        if (rhs._materials[i])
            this->_materials[i] = rhs._materials[i]->clone();
    return (*this);
}

void        MateriaSource::learnMateria(AMateria* src)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materials[i] && src)
        {
            this->_materials[i] = src;
            return ;
        }
    }
}

AMateria*  MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materials[i] && this->_materials[i]->getType() == type)
            return (this->_materials[i]->clone());
    }
    return (0);
}
