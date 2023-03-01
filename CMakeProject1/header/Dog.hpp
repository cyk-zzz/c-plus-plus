#ifndef DOG_HPP
#define DOG_HPP

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