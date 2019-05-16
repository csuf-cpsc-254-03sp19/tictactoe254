/*
 * Tic-tac-toe
 * MIT Licence, Copyright 2017 Chris Kempson (chriskempson.com)
 */

#pragma once
#include <SDL.h>
#include "State.h"
#include <fstream>
using namespace std;
//These are the declarations for the functions that will get the theme value
// and set the theme value
void SetTheme(int number);

int GetTheme();
