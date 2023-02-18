#ifndef _ENGINE_H
#define _ENGINE_H

#include <string>

using namespace std;

class Engine
{
private:
    string m_engineType;
    int m_horsePower;

public:
    Engine();
    Engine(string engineType, int horsePower);
    void SetEngineType(string engineType);
    void SetHorsePower(int horsePower);

    operator string() const;
};

#endif