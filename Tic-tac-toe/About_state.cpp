/*
 * Tic-tac-toe
 * MIT Licence, Copyright 2017 Chris Kempson (chriskempson.com)
 */

#include "About_state.h"
#include "Game.h"
#include "State_manager.h"
#include "Resource_manager.h"
#include "Title_state.h"
#include "Theme.h"


void About_state::init()
{
	//When the about state is initialized, the function will check to see which theme is
	// currently set. It will then load the appropriate about page
	if(GetTheme() == 1)
	{
		Resource_manager::load_image("about");
	}
	else if(GetTheme() == 2)
	{
		Resource_manager::load_image("aboutH");
	}
	else
	{
		Resource_manager::load_image("aboutA");
	}
	Resource_manager::load_sound("about")->play();
}

void About_state::handle_events(SDL_Event& event)
{
	if (event.type == SDL_MOUSEBUTTONDOWN) {
		State_manager::set_state(new Title_state());
	}
}

void About_state::update()
{
	// Not much to do in this kind of game
}

void About_state::render()
{
	//Checks the theme value and renders the proper about message
	if(GetTheme() == 1)
	{
		Resource_manager::get_image("about")->render();
	}
	else if(GetTheme() == 2)
	{
		Resource_manager::get_image("aboutH")->render();
	}
	else
	{
		Resource_manager::get_image("aboutA")->render();
	}

}

void About_state::clean_up()
{
	//Checks the theme value and will clean up the correct about
	// message image
	if(GetTheme() == 1)
	{
		Resource_manager::unload_image("about");
	}
	else if(GetTheme() == 2)
	{
		Resource_manager::unload_image("aboutH");
	}
	else
	{
		Resource_manager::unload_image("aboutA");
	}

	Resource_manager::unload_sound("about");
}
