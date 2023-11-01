/********************************************************************
	Minecraft: Pocket Edition - Decompilation Project
	Copyright (C) 2023 iProgramInCpp
	
	The following code is licensed under the BSD 1 clause license.
	SPDX-License-Identifier: BSD-1-Clause
 ********************************************************************/

#pragma once

#include "ITurnInput.hpp"
#include "client/app/Minecraft.hpp"
class Minecraft;

class MouseTurnInput : public ITurnInput
{
public:
	MouseTurnInput(Minecraft*);
	TurnDelta getTurnDelta() override;

private:
	int m_lastX;
	int m_lastY;

	Minecraft* m_pMinecraft;
};

