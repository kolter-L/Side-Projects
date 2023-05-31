using namespace std;
#include <iostream>
#include "Animal.h"

class Pig: public Animal{
public:
    Pig(): Animal(){
        species = "pig";
    };
    Pig(int WT, string NM): Animal(WT, NM){
        species = "pig";
    };
    void speak() override{
        cout << "oink" << endl;
    }
    int getTopWeight() override{
        return 280;
    }
    string animalType() override{
        return species;
    }
};

