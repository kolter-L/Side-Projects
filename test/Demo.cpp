using namespace std;
#include "Demo.h"
#include<iostream>

Demo :: Demo(){
    k1 = 10;
}
void Demo :: change(Demo &d){
    d.k1 = 25;
}
void Demo :: print(){
    cout << k1 << endl;
}