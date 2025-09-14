#include "wrong.hpp"
#include <iostream>

wrongAnimal::wrongAnimal() : type("") {
    std::cout << "wrongAnimal constructed!" << std::endl;
}
wrongAnimal::~wrongAnimal() {
    std::cout << "wrongAnimal destructed!" << std::endl;
}
wrongAnimal::wrongAnimal(const wrongAnimal& other) : type(other.type) {
    std::cout << "wrongAnimal copied!" << std::endl;
}
wrongAnimal& wrongAnimal::operator=(const wrongAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "wrongAnimal assigned!" << std::endl;
    return *this;
}
std::string wrongAnimal::getType() const {
    return type;
}
void wrongAnimal::makeSound() const {
    std::cout << "Some generic wrongAnimal sound!" << std::endl;
}


wrongCat::wrongCat() {
    type = "wrongCat";
//    std::cout << "wrongCat constructed!" << std::endl;
}

wrongCat::~wrongCat() {
//    std::cout << "wrongCat destructed!" << std::endl;
}

wrongCat::wrongCat(const wrongCat& other) : wrongAnimal(other) {
    std::cout << "wrongCat copied!" << std::endl;
}

wrongCat& wrongCat::operator=(const wrongCat& other) {
    wrongAnimal::operator=(other);
    std::cout << "wrongCat assigned!" << std::endl;
    return *this;
}

void wrongCat::makeSound() const {
    std::cout << "wrongCat says: Meow!" << std::endl;
}