# CPSC 254-03 Semester Project - Tic-Tac-Toe Game Project


## Collaborators
Stephen Shinn		smshinn@csu.fullerton.edu

Emilio Lopez		ealopez1228@csu.fullerton.edu

## How to Play

This is a two player game. Clicking the mouse on the title screen will advance to the play screen. To place a piece on the grid click the mouse in the desired grid area. Once a win or draw message is displayed, clicking again will return to the title screen.

## Additional Functionality

* Clicking the top left button in the title screen will cycle the game's color themes.
* Background music automatically begins when on title screen. 
* Background music can be muted/unmuted using the ```M``` key while playing the game.

## Compiling
Linux


Use your package manager to install SDL2 and SDL2mixer e.g. ```apt-get install libsdl2-dev libsdl2-mixer-dev``` for Ubuntu/Debian or yum install SDL2-devel SDL2_mixer-devel for Fedora/CentOS.


Next run make to compile. Once finished you can run make run to start the application. If you would like to install the application, run make install with elevated privileges e.g. sudo make install. Finally, running make uninstall with elevated privileges can be used to uninstall the application.

