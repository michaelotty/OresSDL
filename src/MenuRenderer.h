#pragma once

#include <memory>
#include <vector>

#include "Button.h"
#include "RenderWrapperBase.h"

class MenuRenderer
{
public:
    MenuRenderer(std::shared_ptr<RenderWrapperBase> render);
    void UpdateRender(std::vector<Button> buttons);
    std::shared_ptr<RenderWrapperBase> render;
};
