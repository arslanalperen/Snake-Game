#ifndef SNAKE_H
#define SNAKE_H
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<ctime>
#include<fstream>

using namespace std;
//global variables
const int titleX = 15, titleY = 3; //coordinates of title

class snake{
	private:
		string nickName;
		string currentTheme;
		static const int width=80;
		static const int height=20;
		string board[width][height];
		const static char karakter=219;//symbol for walls and snake
		bool whileRunning;
		char button[256];
		int currentTailLength;
        enum direction{
    		left = 1,
    		right = 2,
    		up = 3,
   			down = 4};
    	struct yilan{
    		direction yon;
    		int x;
    		int y;
    		char karakter;};
    	struct Line{
			const char Vertical = 186;
			const char Flat = 205;
			const char LeftUpperCorner = 201;
			const char LeftLowerCorner = 200; 
			const char RightUpperCorner = 187; 
			const char RightLowerCorner = 188;
		}Line;
//    	typedef struct showcase{
//			string nick;
//			int Score;
//		}showcase;
//		showcase ShowCase[5];
		yilan snakeTail[500];
		int fruitX;
		int fruitY;
		int score;
	public:
		snake(){
			nickName = " ";
			currentTheme = "Classic";
//			for(int i = 0 ; i < 5 ; i++){
//				ShowCase[i].Score = 0;
//				ShowCase[i].nick = " ";
//			}
		}
		
		//menus and entry animations
		void nickNameEntrance(); //defined for codes of taking nick tab
		void mainMenu(); //defined for codes of main menu
		void mainMenuTheme(); //defined for theme of main menu
		void settings(); //defined for codes of settings tab
		void info(); //defined for infos about creators the game
        void changeThemeMenu(); //defined for codes of changing theme tab
        void entryAnimation(); //defined for entry with animation
		void friend menuConstants(int titleX, int titleY, string nickName, string currentTheme); //defined for the same codes used in more than one function
		void gameOverMenu();
//		void scoreboard(); //defined for codes of skorboard tab
//		void showcaseSave();
//		void scoreboardSave();
//		void scoreboardRead();
		
		//creating game area and snake actions
		void friend gotoxy(); //defined for using the console with coordinates
      	void drawGameboard();
	  	void startGame();	
		void hideCursor();
		void moveSnake();
		void cleanGameboard();
		void readKeyboard();
		void defaultSnake();
		void drawSnake();
		void operator ++();//for tail adding
		void fruit();
		bool gameOver();
};
void gotoxy();
void menuConstants(int titleX, int titleY, string nickName, string currentTheme); //defined for the same codes used in more than one function

#endif
