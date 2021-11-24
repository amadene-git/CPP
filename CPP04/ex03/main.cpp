#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    AMateria    *cure1 = new Cure();
    AMateria    *cure2 = new Cure();
    AMateria    *ice1 = new Ice();
    AMateria    *ice2 = new Ice();
    Character   bob("Bob");
    Character   dylan("Dylan");
    
    bob.equip(cure1);
    bob.equip(cure2);
    bob.equip(ice1);
    bob.equip(ice2);
    bob.equip(cure1);

    bob.use(-1, dylan);
    bob.use(0, dylan);
    bob.use(1, dylan);
    bob.use(2, dylan);
    bob.use(3, dylan);
    bob.use(4, dylan);

    std::cout << std::endl;

    bob.unequip(-1);
    bob.unequip(0);
  //  bob.unequip(1);
  //  bob.unequip(2);
  //  bob.unequip(3);
  //  bob.unequip(4);

    bob.use(-1, dylan);
    bob.use(0, dylan);
    bob.use(1, dylan);
    bob.use(2, dylan);
    bob.use(3, dylan);
    bob.use(4, dylan);

    dylan.use(0, bob);

    bob.equip(cure1);


    return (0);
}