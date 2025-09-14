#include "Animal.hpp"
#include "brain.hpp"
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
    brain = new Brain();
    std::cout << "Dog constructed!" << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructed!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Dog copied!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Dog assigned!" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

std::string Dog::getIdea(int index) const {
    return brain->getIdea(index);
}

void Dog::setIdea(int index, const std::string& idea) {
    brain->setIdea(index, idea);
}

//cat
Cat::Cat() {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructed!" << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructed!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    brain = new Brain(*other.brain);
    std::cout << "Cat copied!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat assigned!" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

std::string Cat::getIdea(int index) const {
    return brain->getIdea(index);
}

void Cat::setIdea(int index, const std::string& idea) {
    brain->setIdea(index, idea);
}
