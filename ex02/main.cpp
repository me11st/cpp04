#include "brain.hpp"
#include "Animal.hpp"
#include <iostream>

int main()
{
    // Step 1: Create animals (each gets its own brain automatically)
    Animal* animals[12];
    for (int i = 0; i < 6; ++i) {
        Dog* dog = new Dog();
        for (int j = 0; j < 100; ++j)
            dog->setIdea(j, std::string(1, 'a' + (j % 26))); 
        animals[i] = dog;
    }
    for (int i = 6; i < 12; ++i) {
        Cat* cat = new Cat();
        for (int j = 0; j < 100; ++j)
            cat->setIdea(j, std::string(1, 'A' + (j % 26))); 
        animals[i] = cat;
    }

    for (int i = 0; i < 12; ++i) {
        animals[i]->makeSound(); // polymorphism in action
    }

    std::cout << "Dog 3's idea1: " << static_cast<Dog*>(animals[2])->getIdea(0) << std::endl;

    // Change Dog 3's specific ideas
    static_cast<Dog*>(animals[2])->setIdea(0, "I am the special Dog 3!");
    static_cast<Dog*>(animals[2])->setIdea(1, "I should be friends with cats");

    // Print to verify
    std::cout << "Dog 3's idea1: " << static_cast<Dog*>(animals[2])->getIdea(0) << std::endl;
    std::cout << "Dog 3's idea2: " << static_cast<Dog*>(animals[2])->getIdea(1) << std::endl;
    std::cout << "Dog 2's idea1: " << static_cast<Dog*>(animals[1])->getIdea(0) << std::endl;
    std::cout << "Dog 2's idea2: " << static_cast<Dog*>(animals[1])->getIdea(1) << std::endl;

    // Step 2: Test deep copy
    Dog* original = new Dog();
    original->setIdea(0, "Original idea");
    Dog* copy = new Dog(*original);
    copy->setIdea(0, "I'm part of the pack");

    std::cout << "Original dog's idea: " << original->getIdea(0) << std::endl;
    std::cout << "Copy dog's idea: " << copy->getIdea(0) << std::endl;

    delete original;
    delete copy;

    // Step 3: Clean up
    for (int i = 0; i < 12; ++i)
        delete animals[i];


    std::cout << "and no, you are not back to the kindergarden" << std::endl;
    return 0;
}