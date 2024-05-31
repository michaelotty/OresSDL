#pragma once

#include <functional>
#include <string>

class Button
{
public:
    int x;
    int y;
    int width;
    int height;
    std::string text;
    std::function<void()> OnClick;
};
