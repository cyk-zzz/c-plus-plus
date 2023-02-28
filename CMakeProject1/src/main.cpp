#include <iostream>
#include <string>
#include "Dog.hpp"

using namespace std;

int main(int, char**) {
    Dog shiba(50, "Shiba Inu");
    Animal* rAnimal = 0;
    rAnimal = &shiba;

    rAnimal-> PrintInfo();
}