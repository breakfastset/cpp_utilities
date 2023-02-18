#include "Student.h"

Student::Student()
{
    this->name = "Noname";
    this->score = 0;
}

void Student::SetName(const string &name)
{
    this->name = name;
}

void Student::SetScore(float score)
{
    this->score = score;
}

Student::operator string() const
{
    return "Name: " + this->name + ", Score: " +
        to_string(this->score);
}