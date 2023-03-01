#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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