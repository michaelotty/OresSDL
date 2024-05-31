#pragma once
#include "Button.h"
#include "RenderWrapperBase.h"
#include <memory>
#include <vector>


class MenuRenderer
{
public:
    MenuRenderer(std::shared_ptr<RenderWrapperBase> render);
    void UpdateRender(std::vector<Button> buttons);
    std::shared_ptr<RenderWrapperBase> render;
};
