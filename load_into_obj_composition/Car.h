#ifndef _CAR_H
#define _CAR_H
#include <string>
#include "Engine.h"
using namespace std;

class Car
{
private:
    string m_name;
    string m_make;
    int m_price;
    Engine m_engine;

public:
    Car();
    Car(string name, string make, int price, Engine engine);
    void SetName(string name);
    void SetMake(string make);
    void SetPrice(int price);
    void SetEngine(Engine engine);

    operator string() const;
};

#endif