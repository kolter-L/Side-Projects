#pragma once
using namespace std;
#include <iostream>

class Animal{
private:
    int weight;
    string name;
public:
    string species; // used to identify animal type in eat method
    Animal();
    Animal(int WT, string NM);
    const string getName();
    const int getWeight();
    void setName(string NM);
    void setWeight(int WT);
    void eat();
    void gainWeight(int pounds); // each type of animal gains a different amount of weight
    virtual void speak() = 0;
    virtual int getTopWeight() = 0; // pure virtual functions
    virtual string animalType() = 0; // returns species for each animal type
};
