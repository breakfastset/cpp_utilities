#ifndef _STUDENT_H
#define _STUDENT_H
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int score;

public:
    Student();
    void SetName(const string &name);
    void SetScore(float score);
    operator string() const;
};
#endif