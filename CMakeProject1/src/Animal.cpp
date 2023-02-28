#include <iostream>
#include <string>
#include "Animal.hpp"

using namespace std;

Animal::Animal()
{
    this->age = 0;
};

Animal::Animal(int age)
{
    this->age = age;
}

int Animal::GetAge()
{
    return age;
}

// Pure virtual needs to overwrite