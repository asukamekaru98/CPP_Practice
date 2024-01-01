#include <iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "The animal makes a sound.\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow!\n";
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!\n";
    }
};

int main() {
    Animal animal;
    Cat cat;
    Dog dog;

    Animal* animal1 = &cat; // Cat型のインスタンスをAnimal型にアップキャスト
    Animal* animal2 = &dog; // Dog型のインスタンスをAnimal型にアップキャスト

    animal1->makeSound(); // Meow!
    animal2->makeSound(); // Woof!
    animal.makeSound();
    
    Animal Animal2;
    Dog dog2;

    dog2.makeSound();

    Dog
}