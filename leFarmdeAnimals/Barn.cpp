#include <iostream>
#include <vector>
#include "Barn.h"
#include <typeinfo>
using namespace std;


Barn :: Barn(){ // fills the barn with animals
    for(int i = 0; i < 5; i++){
        barn[i] = new Chicken(9, "Eric");
    }
    for(int i = 5; i < 10; i++){
        barn[i] = new Pig(260, "Timmy");
    }
    for(int i = 10; i < 15; i++){
        barn[i] = new Cow(1330, "Kyle");
    }
}

void Barn :: feedAnimals(){ // adds different amounts of weight depending upon the position in the array
    for(int i = 0; i < 5; i++){
        barn[i]->eat();
        barn[i]->gainWeight(3);
    }
    for(int i = 5; i < 10; i++){
        barn[i]->eat();
        barn[i]->gainWeight(20);
    }
    for(int i = 10; i < 15; i++){
        barn[i]->eat();
        barn[i]->gainWeight(20);
    }

    for(int i = 0; i < 15; i++){
        if(barn[i]->getWeight() >= barn[i]->getTopWeight()){
            outToPasture(i);
        }
    }
}

Barn :: ~Barn(){ // Barn destructor
    for(int i = 0; i < 15; i++){
        delete barn[i];
    }
};

void Barn::outToPasture(int i) { // creates new animal depending upon their position in the array
    cout << barn[i]->getName() << " the " << barn[i]->animalType() << " is put out to pasture" << endl;
    if(i >= 0 && i < 5){
        barn[i] = new Chicken(9, "New Chicken");
    }
    if(i >= 5 && i < 10){
        barn[i] = new Pig(260, "New Pig");
    }
    if(i >= 10 && i < 15){
        barn[i] = new Cow(1330, "New Cow");
    }
}
void Barn ::showAnimals() { // shows all animals
    for(int i = 0; i < 15; i++){
        cout << barn[i]->getName() << " the " << barn[i]->animalType() << " weighs " << barn[i]->getWeight() << " pounds" << endl;
    }
}