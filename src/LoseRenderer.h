#pragma once

#include <memory>
#include <vector>

#include "Button.h"
#include "RenderWrapperBase.h"
#include "SaveData.h"

class LoseRenderer
{
public:
    LoseRenderer(std::shared_ptr<RenderWrapperBase> render);
    void UpdateRender(std::vector<Button> buttons, SaveData saveData);

private:
    std::shared_ptr<RenderWrapperBase> render;
};
