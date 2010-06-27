/*
 * Copyright 2010 Daniel Albano
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef OPENXCOM__MONTHLYCOSTSSTATE_H
#define OPENXCOM__MONTHLYCOSTSSTATE_H

#include <sstream>
#include "State_Interactive.h"
#include "LangString.h"
#include "Palette.h"
#include "Button.h"
#include "Window.h"
#include "Text.h"
#include "TextList.h"
#include "Base.h"

/**
 * Monthly Costs screen that displays all
 * the maintenance costs of a particular base.
 */
class MonthlyCostsState : public State
{
private:
	Base *_base;

	Button *_btnOk;
	Window *_window;
	Text *_txtTitle, *_txtCost, *_txtQuantity, *_txtTotal, *_txtRental, *_txtSalaries, *_txtIncome;
	TextList *_lstCrafts, *_lstSalaries, *_lstMaintenance, *_lstTotal;
public:
	/// Creates the Monthly Costs state.
	MonthlyCostsState(Game *game, Base *base);
	/// Cleans up the Monthly Costs state.
	~MonthlyCostsState();
	/// Handler for clicking the OK button.
	void btnOkClick(SDL_Event *ev, int scale);
};

#endif