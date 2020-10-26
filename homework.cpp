#include <iostream>
#include "Helpers.h"
#include <array>

void Animal::Voice()
{
    std::cout << "animal sound!" << std::endl;
};

void Dog::Voice()
{
    std::cout << "Woof!" << std::endl;
};

void Cat::Voice()
{
    std::cout << "Mew!" << std::endl;
};

void Rabbit::Voice()
{
    std::cout << "Hiss!" << std::endl;
};

int main()
{
    Animal* dog = new Dog();
    Animal* cat = new Cat();
    Animal* rabbit = new Rabbit();

    Animal* array[3] = { dog, cat, rabbit };

    for  (int i = 0; i < 3; i++)
    {
        array[i]->Voice();
    };

    delete dog;
    delete cat;
    delete rabbit;
    delete [] array;

    return 0;
};

