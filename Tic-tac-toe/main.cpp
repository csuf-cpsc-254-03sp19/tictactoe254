/*
 * Tic-tac-toe
 * MIT Licence, Copyright 2017 Chris Kempson (chriskempson.com)
 */

#include <iostream>
#include <string>
#include "Game.h"
#include "Setting.h"
#include "State_manager.h"
#include "Resource_manager.h"
#include "Title_state.h"
#include "Theme.h"

// App entry point
int main(int argc, char* args[])
{
	SetTheme(1);
	if (!game.init(Setting::game_name, Setting::window_width, Setting::window_height)) {
		std::cout << "Application initialisation error. Exiting. " << std::endl;
	}

	State_manager::set_state(new Title_state());
	
	//Loading the BGM at game startup	
	Resource_manager::load_sound("Spy");
	Resource_manager::get_sound("Spy")->play();

	game.run();
	
	//Unloading the BGM at game end
	Resource_manager::unload_sound("Spy");
	return 0;
}
