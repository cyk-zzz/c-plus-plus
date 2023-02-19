#include <iostream>
#include <string>
#include "Dog.h"

using namespace std;

// class Animal{
//     private:
//         int age;

//     public:
//         Animal(){
//             this->age = 0;
//         };

//         Animal(int age){
//             this->age = age;
//         }

//         int GetAge(){
//             return age;
//         }

//         // Pure virtual needs to overwrite
//         virtual void PrintInfo() = 0;
// };

// class Dog : public Animal{
//     private:
//         std::string name;

//     public:
//         Dog(int age, string name) : Animal(age){
//             this->name = name;
//         }

//         string GetName(){
//             return name;
//         }

//         void PrintInfo(){
//             cout << "Name: " << GetName() << endl;
//             cout << "Age: " << GetAge() << endl;
//         }
// };

int main(int, char**) {
    Dog shiba(50, "Shiba Inu");
    Animal* rAnimal = 0;
    rAnimal = &shiba;

    rAnimal-> PrintInfo();
}