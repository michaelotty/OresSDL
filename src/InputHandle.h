#pragma once

#include <vector>

#include "InputObserver.h"

class InputHandler
{
public:
    void HandleEvents();
    std::vector<InputObserver*> observers;
    void RegisterObserver(InputObserver* observer)
    {
        observers.push_back(observer);
    }

    void RemoveObserver(InputObserver* observer)
    {
        auto it = std::find(observers.begin(), observers.end(), observer);
        if (it != observers.end())
        {
            observers.erase(it);
        }
    }
};