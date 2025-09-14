#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("") {
    std::cout << "Animal constructed!" << std::endl;
}
Animal::~Animal() {
    std::cout << "Animal destructed!" << std::endl;
}
Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copied!" << std::endl;
}
Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Animal assigned!" << std::endl;
    return *this;
}
std::string Animal::getType() const {
    return type;
}
void Animal::makeSound() const {
    std::cout << "Some generic animal sound!" << std::endl;
}

//dog
Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructed!" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructed!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog copied!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    Animal::operator=(other);
    std::cout << "Dog assigned!" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

//cat
Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructed!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructed!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copied!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    Animal::operator=(other);
    std::cout << "Cat assigned!" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
