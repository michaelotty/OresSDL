#pragma once
#include "RenderWrapperBase.h"
#include <memory>
#include "BoardLogic.h"

class InGameRenderer
{
public:
	InGameRenderer(std::shared_ptr<BoardLogic> boardLogic, std::shared_ptr<RenderWrapperBase> render);
	void UpdateRender(int score, int level, int pointsToNextLevel);
	std::shared_ptr<RenderWrapperBase> render;
private:
	std::shared_ptr<BoardLogic> boardLogic;
};

