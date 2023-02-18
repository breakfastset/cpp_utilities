#include "Engine.h"

Engine::Engine()
{
    this->m_engineType = "Unknown Engine";
    this->m_horsePower = 0;
}

Engine::Engine(string engineType, int horsePower)
{
    this->m_engineType = engineType;
    this->m_horsePower = horsePower;
}

void Engine::SetEngineType(string engineType)
{
    this->m_engineType = engineType;
}

void Engine::SetHorsePower(int horsePower)
{
    this->m_horsePower = horsePower;
}

Engine::operator string() const
{
    return "[ Engine Type: " + this->m_engineType + ", bHP: " + to_string(this->m_horsePower) + " ]";  
}