#include "Pig.h"
#include "Cow.h"
#include "Chicken.h"
#include <iostream>
#include <vector>
using namespace std;

class Barn{
private:
    Animal * barn[15];
public:
    Barn();
    void showAnimals();
    void feedAnimals();
    ~Barn();
    void outToPasture(int i);
};
