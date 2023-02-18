#include <iostream>
#include "Car.h"
#include "Engine.h"
#include <string>

using namespace std;

int main()
{
    Car car;
    Engine engine("Electric", 561);
    Car secondCar("Tesla", "Sedan", 115000, engine);

    cout << (string) car << endl;
    cout << (string) secondCar << endl;
    return 0;
}