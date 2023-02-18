#include <iostream>
#include <vector>
#include "Student.h"
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

void LoadFile(string filename, vector<Student> &students);

int main()
{
    // 0. data store
    vector<Student> students;
    // 1. Input
    LoadFile("scores.csv", students);

    // 2. Processing

    // 3. Output
    cout << students.size() << endl;
    cout << (string) students[1] << endl;

    return 0;
}

void LoadFile(string filename, vector<Student> &students)
{
    ifstream inFile(filename.c_str());
    if (inFile.rdstate() == 0)
    {
        Student student;
        string line;
        int count = 0;

        while(getline(inFile, line))
        {
            if (count != 0)
            {
                stringstream ss(line);
                string data;  // for storing individual field
                getline(ss, data, ',');   // name
                string name = data;
                getline(ss, data, ',');   // test 1
                getline(ss, data, ',');   // test 2
                float score = stoi(data);
                student.SetName(name);
                student.SetScore(score);
                students.push_back(student);
            }
            count++;
        }
    }
}