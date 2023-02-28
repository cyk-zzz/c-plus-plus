#ifndef DOG_H
#define DOG_H

#include <string>
#include "Animal.hpp"

using namespace std;

class Dog : public Animal{
    private:
        string name;

    public:
        Dog(int age, string name);
        string GetName();
        void PrintInfo();
};

#endif