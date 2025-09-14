#include "brain.hpp"
#include <iostream>

Brain::Brain() {
    for (int i = 0; i < 100; ++i) {
        ideas[i] = "Empty idea";
    }
    std::cout << "Brain constructed!" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructed!" << std::endl;
}

Brain::Brain(const Brain& other) {
    for (int i = 0; i < 100; ++i) {
        ideas[i] = other.ideas[i];
    }
    std::cout << "Brain copied!" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    std::cout << "Brain assigned!" << std::endl;
    return *this;
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return ideas[index];
    }
    return "Invalid index";
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    }
}