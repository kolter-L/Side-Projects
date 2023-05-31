
using namespace std;
#include <iostream>
#include "Animal.h"

class Cow: public Animal{
public:
    Cow(): Animal(){
        species = "cow";
    };
    Cow(int WT, string NM): Animal(WT, NM){
        species = "cow";
    };
    void speak() override{
        cout << "moo" << endl;
    }
    int getTopWeight() override{
        return 1350;
    }
    string animalType() override{
        return species;
    }
};

