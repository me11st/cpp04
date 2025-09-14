#ifndef WRONG_HPP
#define WRONG_HPP
#include <string>

class wrongAnimal {
protected:
    std::string type;
public:
    wrongAnimal();
    virtual ~wrongAnimal();
    wrongAnimal(const wrongAnimal& other);
    wrongAnimal& operator=(const wrongAnimal& other);
    std::string getType() const;
    void makeSound() const;
};

class wrongCat : public wrongAnimal {
public:
    wrongCat();
    ~wrongCat();
    wrongCat(const wrongCat& other);
    wrongCat& operator=(const wrongCat& other);
    void makeSound() const;
};

#endif