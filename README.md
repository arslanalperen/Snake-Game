# Snake Game

**<h1>Project Objective</h1>**  

The aim of the project is to make a c++ version of the popular snake game. A menu design is also included in the project, where the user can enter the username, access the game's settings, view the leaderboard, end the program or start the game before the game starts.  

**<h1>Description of Problem</h1>**  

Our first problem in the project is to design the main menu of the game, this main menu should contain commands to get the name from the user, show the leaderboard, show game information, settings and close the program. In addition, in the settings pane, the theme of the game or the name of the user can be changed and the scoreboard should be cleared. Our second problem is to start the game. When the game starts, a snake whose length is 1 cell must be created and moves in a certain direction, and the tail of the snake must be increased as this snake eats fruit.  

**<h1>Description of Method</h1>**  

In order to solve the problem, a class must first be created. This class contains all the functions and all the data about the snake. When the game is first opened, the intro animation and the logo of the producer studio appear on the screen. The user is prompted to enter the username. After entering the user name, the main menu appears. The main menu is printed continuously in an endless while loop, and the menu pointer is moved by pressing the arrow keys of the user. When the user selects any option, he enters the relevant case of the switch. If the user presses the play button, the game starts. There is an endless while loop in the game, depending on the direction of the snake, the position of the snake is changed one cell at a time. Afterwards, the game board is cleared and the new position of the snake is reprinted on the screen. If the head of the snake is in the same position as a fruit, the tail of the snake is increased by one cell and a new fruit is created and printed on the screen again. This process continues until the snake hits its own tail or one of the walls.  

**<h1>User's Guide</h1>**  

When the user opens the program, the login animation appears first.  

![1](/images/1.png)  
![2](/images/2.png)  

The user is then prompted to enter their name.  

![3](/images/3.png)  

After that, the main menu appears on the screen.  

![4](/images/4.png)  

If the user presses settings, the settings menu appears.  

![5](/images/5.png)  

If the user presses the play button, the game is displayed.  

![6](/images/6.png)  

**<h1>Result of the Solution</h1>**  

![7](/images/7.png)  
![8](/images/8.png)  

**<h1>Flowchart of the Program</h1>**  

![Flowchart](/images/Flowchart.jpg)  

**<h1>Conclusion and Remarks</h1>**  

In this project, first of all, we gained important experience in the distribution of tasks and the construction phase of large projects. We also had an idea about developing algorithms and collecting the written codes under a single project file in projects where task distribution was made. As for the difficulties we experience; We were unable to add the scoreboard, which we aimed at at the beginning of the project, due to the mistakes we experienced and the lack of time. Our code is quite user friendly. How to use the program can be understood very simply and properly, as we have explained in the user guide. The program is a program that appeals to the general audience of players that can be enjoyed and played comfortably by large and small audiences of all ages. In this project, we learned how to use the enum structure, the functions of the Windows.h library, and especially the functions related to the class structure, and the general algorithm for animation in console applications.  

**<h1>References</h1>**  

•    Kodlakafa.com  
•    Alldatasheet.com  
•    Stackoverflow.com  
•    Algoritmaornekleri.com  
•    Arduinolibraries.com  
•    Github.com  
•    Sanatsalbilgi.com  
•    Theengineeringprojects.com  
•    Rapidtables.com  
•    Koddefteri.com  
•    Erhanulman.com  
•    Forum.donanimhaber.com  
•    Cagataycebi.com  
•    Forum.csharpnedir.com  
•    En.wikipedi0.org  
•    Hayaletveyap.com  
•    Grafiboyz.blogcu.com  
•    Aliozcan.org  
•    Gelecegiyazanlar.turkcell.com.tr  
•    Iucoders.com  
•    Sanalkurs.net  
•    Buraksenyurt.com  
•    Microcore.com  
•    Link24in.wordpress.com  
•    Soyunmezoglubaris.blogspot.com  
•    Motorobit.com  
•    Kodumundunyasi.net  
