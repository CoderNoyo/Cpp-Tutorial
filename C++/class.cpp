#include<bits/stdc++.h>
using namespace std;

class Animal{
    // *vptr(pointer)------------------------------> vtable(dictionary)------>Animal->eat; Animal->makeNoise
    protected:
    string name;
    int legs;

    public:
    Animal(){
        this->name = "Animal";
        this->legs = 2;
    }

    Animal(string name){
        this->name = name;
        this->legs = 2;
    }

    Animal(string name, int legs){
        this->name = name;
        this->legs = legs;
    }

    void run(){
        cout<<name<<" running with: "<<legs<<" legs."<<endl;
    }

    virtual void eat(){
        cout<<"Eating grass"<<endl;
    }

    virtual void makeNoise(){
        cout<<"MOOOOO"<<endl;
    }
};

class Dog : public Animal{
    // *vptr-------------------------------------------> vtable------->Dog->eat; Dog->makeNoise
    public:
    Dog():Animal(){}
    Dog(string name):Animal(name){}
    Dog(string name, int legs):Animal(name,legs){}

    void eat(){
        cout<<"Eating meat"<<endl;
    }

    void makeNoise(){
        cout<<"Bow bow"<<endl;
    }
};

int main(){
    // Animal cat = Animal();
    // Animal cat2 = Animal("Kitty");
    // Animal cat3 = Animal("katy",4);
    // cat.run();
    // cat2.run();
    // cat3.run();

    Animal *animal, *dog;
    animal = new Animal();
    dog = new Dog("Doggy",4);

    // animal->run();
    // dog->run();
    dog->eat();
    animal->eat();
    dog->makeNoise();
    animal->makeNoise();
    return 0;
}