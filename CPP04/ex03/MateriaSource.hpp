#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_materials[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		virtual ~MateriaSource();
		MateriaSource &operator=(MateriaSource const &other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif