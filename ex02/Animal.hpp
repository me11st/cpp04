#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Brain;

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    std::string getType() const;
    virtual void makeSound() const = 0;
};

class Cat : public Animal {
private:
    Brain* brain;
public:
    Cat();
    ~Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    void makeSound() const;
    std::string getIdea(int index) const;
    void setIdea(int index, const std::string& idea);
};

class Dog : public Animal {
private:
    Brain* brain;
public:
    Dog();
    ~Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    void makeSound() const;
    std::string getIdea(int index) const;
    void setIdea(int index, const std::string& idea);
};

#endif
