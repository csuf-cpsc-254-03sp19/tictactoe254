/*
 * Tic-tac-toe
 * MIT Licence, Copyright 2017 Chris Kempson (chriskempson.com)
 */

#include "Theme.h"

void SetTheme(int number)
{
  ofstream ofile;
  ofile.open("Theme.txt", std::ofstream::out | std::ofstream::trunc);

  ofile << number;

  ofile.close();
}

int GetTheme()
{
  int numReturn;
  ifstream ifile;
  ifile.open("Theme.txt");

  ifile >> numReturn;

  ifile.close();

  return numReturn;

}
