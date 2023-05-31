using namespace std;
#include <iostream>
#include "Animal.h"

class Chicken: public Animal{
public:
    Chicken(): Animal(){
        species = "chicken";
    };
    Chicken(int WT, string NM): Animal(WT, NM){
        species = "chicken";
    };
    void speak() override{
        cout << "cluck" << endl;
    }
    int getTopWeight() override{
        return 12;
    }
    string animalType() override{
        return species;
    }
};

