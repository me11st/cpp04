#include "wrong.hpp"
#include "Animal.hpp"
#include <iostream>

int main()
{
   const Animal* meta = new Animal();
   const Animal* d = new Dog();
   const Animal* c = new Cat();

    const wrongAnimal* wmeta = new wrongAnimal();
    const wrongAnimal* wc = new wrongCat();

    std::cout << d->getType() << " " << std::endl;
    d->makeSound();

    std::cout << c->getType() << " " << std::endl;
    c->makeSound();

    std::cout << "Animal" << std::endl;
    meta->makeSound();
    
    std::cout << wc->getType() << " sound" << std::endl;
    wc->makeSound();

    std::cout << "wrongAnimal sound" << std::endl;
    wmeta->makeSound();

    std::cout << "and no, you are not back to the kindergarden" << std::endl;
    return 0;
}