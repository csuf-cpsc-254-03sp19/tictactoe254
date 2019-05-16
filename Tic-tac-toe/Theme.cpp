/*
 * Tic-tac-toe
 * MIT Licence, Copyright 2017 Chris Kempson (chriskempson.com)
 */

#include "Theme.h"

//Opens the file holding the value of theme and clears it. Then it writes the value
// that was passed to the function into the file and saves it there
void SetTheme(int number)
{
  ofstream ofile;
  ofile.open("Theme.txt", std::ofstream::out | std::ofstream::trunc);

  ofile << number;

  ofile.close();
}

//Opens the file that holds the value of the theme and reads it.
// Returns the value of the theme
int GetTheme()
{
  int numReturn;
  ifstream ifile;
  ifile.open("Theme.txt");

  ifile >> numReturn;

  ifile.close();

  return numReturn;

}
