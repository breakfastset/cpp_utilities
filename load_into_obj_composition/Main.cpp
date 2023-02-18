#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Car.h"

using namespace std;

void LoadData(string filename, vector<Car> &cars);
void DisplayCars(vector<Car>& cars);

int main()
{
    // Load scores.csv into a Vector of Car objects

    // 0. Data Store
    vector<Car> cars;

    // 1. Input Data
    // Load file into cars vector
    LoadData("cars.csv", cars);

    // 2. Process

    // 3. Output
    // Display the car\ objects in the vector
    cout << "Loaded records: " << endl;
    cout << cars.size() << endl;

    DisplayCars(cars);

    return 0;
}

void DisplayCars(vector<Car> &cars)
{
    for(int i = 0; i < cars.size(); i++)
    {
        cout << (i+1) << ") " << (string) cars[i] << endl;
    }
}

void LoadData(string filename, vector<Car> &cars)
{
    ifstream inFile( filename.c_str() );

    if (inFile.rdstate() == 0)  // file is ready to be read
    {
        Car car;
        string line;

        getline(inFile, line);   // throw away the header
        
        while(getline(inFile, line))  // get second line onwards and put into Car objects
        {
            // split the string into different parts based on delimiter ,
            // convert the line into a stream before we can use in getline()
            stringstream ss(line);
            string data;
            getline(ss, data, ',');    // name
            string name = data;
            getline(ss, data, ',');    // make
            string make = data;
            getline(ss, data, ',');    // engine type
            string engineType = data;
            getline(ss, data, ',');    // horse power
            int horsePower = stoi(data);
            getline(ss, data, ',');    // price
            int price = stoi(data);

            car.SetName(name);
            car.SetMake(make);
            car.SetPrice(price);

            Engine engine(engineType, horsePower);
            car.SetEngine(engine);

            cars.push_back(car);   // put it into the vector
        }

    }
    else
    {
        cerr << "File " << filename << " does not exist or cannot be read." << endl;
    }
}
