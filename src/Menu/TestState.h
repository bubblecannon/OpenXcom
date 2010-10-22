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
#ifndef OPENXCOM_TESTSTATE_H
#define OPENXCOM_TESTSTATE_H

#include "../Engine/State.h"

class SurfaceSet;
class Surface;
class TextButton;
class Window;
class Text;
class TextList;

/**
 * A state purely for testing game functionality.
 * Fun fact, this was the project's original main(),
 * used for testing and implementing basic engine
 * features until it grew a proper structure and was
 * put aside for actual game states. Useful as a
 * sandbox / testing ground.
 */
class TestState : public State
{
private:
	SurfaceSet *_set;
	Surface *_surf;
	TextButton *_button;
	Window *_window;
	Text *_text;
	TextList *_list;
	int _i;
	
	/// Creates a surface with every color in the palette.
	SDL_Surface *testSurface();
public:
	/// Creates the Test state.
	TestState(Game *game);
	/// Cleans up the Test state.
	~TestState();
	void think();
	void blit();
};

#endif