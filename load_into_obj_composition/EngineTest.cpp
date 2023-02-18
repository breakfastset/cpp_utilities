#include <iostream>
#include <string>
#include "Engine.h"

using namespace std;

int main()
{
    Engine engine;
    Engine anotherEngine("Electric", 303);

    cout << (string) engine << endl;
    cout << (string) anotherEngine << endl;

    return 0;
}