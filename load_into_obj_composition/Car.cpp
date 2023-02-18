#include "Car.h"

Car::Car()
{
    this->m_name = "Nameless Car";
    this->m_make = "Unknown Make";
    this->m_price = 0;
}

Car::Car(string name, string make, int price, Engine engine)
{
    this->m_name = name;
    this->m_make = make;
    this->m_price = price;
    this->m_engine = engine;
}

void Car::SetName(string name)
{
    this->m_name = name;
}

void Car::SetMake(string make)
{
    this->m_make = make;

}

void Car::SetPrice(int price)
{
    this->m_price = price;

}

void Car::SetEngine(Engine engine)
{
    this->m_engine = engine;
}

Car::operator string() const
{
    return "Name: " + m_name + ", Make: " + m_make + ", Price: $" 
        + to_string(this->m_price) + " " + (string) m_engine;
}