#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    std::string getType() const;
    virtual void makeSound() const;
};

class Cat : public Animal {
public:
    Cat();
    ~Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    void makeSound() const;
};

class Dog : public Animal {
public:
    Dog();
    ~Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    void makeSound() const;
};

#endif
