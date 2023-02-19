#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"

using namespace std;

Dog::Dog(int age, string name) : Animal(age)
{
    this->name = name;
}

string Dog::GetName()
{
    return name;
}

void Dog::PrintInfo()
{
    cout << "Name: " << GetName() << endl;
    cout << "Age: " << GetAge() << endl;
}