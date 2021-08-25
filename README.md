# Snake Game

**<h1>Project Objective</h1>**  

The aim of the project is to make a c++ version of the popular snake game. A menu design is also included in the project, where the user can enter the username, access the game's settings, view the leaderboard, end the program or start the game before the game starts.  

**<h1>Description of Problem</h1>**  

Our first problem in the project is to design the main menu of the game, this main menu should contain commands to get the name from the user, show the leaderboard, show game information, settings and close the program. In addition, in the settings pane, the theme of the game or the name of the user can be changed and the scoreboard should be cleared. Our second problem is to start the game. When the game starts, a snake whose length is 1 cell must be created and moves in a certain direction, and the tail of the snake must be increased as this snake eats fruit.  

**<h1>Description of Method</h1>**  

In order to solve the problem, a class must first be created. This class contains all the functions and all the data about the snake. When the game is first opened, the intro animation and the logo of the producer studio appear on the screen. The user is prompted to enter the username. After entering the user name, the main menu appears. The main menu is printed continuously in an endless while loop, and the menu pointer is moved by pressing the arrow keys of the user. When the user selects any option, he enters the relevant case of the switch. If the user presses the play button, the game starts. There is an endless while loop in the game, depending on the direction of the snake, the position of the snake is changed one cell at a time. Afterwards, the game board is cleared and the new position of the snake is reprinted on the screen. If the head of the snake is in the same position as a fruit, the tail of the snake is increased by one cell and a new fruit is created and printed on the screen again. This process continues until the snake hits its own tail or one of the walls.  

**<h1>User's Guide</h1>**  

When the user opens the program, the login animation appears first.  
