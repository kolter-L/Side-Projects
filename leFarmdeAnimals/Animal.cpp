using namespace std;
#include <iostream>
#include "Animal.h"

Animal :: Animal(){
    weight = 0;
    name = "Unnamed :(";
}
Animal :: Animal(int WT, string NM){
    weight = WT;
    name = NM;
}
const string Animal :: getName(){
    return name;
}
const int Animal :: getWeight(){
    return weight;
}
void Animal :: setName(string NM) {
    name = NM;
}
void Animal :: setWeight(int WT) {
    weight = WT;
}
void Animal :: gainWeight(int pounds){ // universal weight gaining function
    weight = weight + pounds;
    cout << name << " gained " << pounds << " pounds." << endl;
    cout << name << " now weighs " << weight << " pounds." << endl << endl;
}
void Animal :: eat(){ // universal eat function
    cout << name << " the " << species << " is eating." << endl;
}