#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
    private:
        int age;

    public:
        Animal();
        Animal(int age);
        int GetAge();
        virtual void PrintInfo() =0 ;
};

#endif