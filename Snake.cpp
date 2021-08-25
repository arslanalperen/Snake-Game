#include"Snake.h"

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

//void snake::scoreboardSave(){
//	ofstream writeData("skorboard.txt",ios::out);
//	if(writeData.is_open()){
//		for(int i = 0 ; i < 5 ; i++){
//			writeData << ShowCase[i].Score << endl;
//		}
//		for(int i = 0 ; i < 5 ; i++){
//			writeData << ShowCase[i].nick << endl;
//		}
//	}
//	writeData.close();
//}
//
//void snake::scoreboardRead(){
//	ifstream readData("skorboard.txt",ios::in);
//	int i = 0;
//	if(readData.is_open()){
//		while(i < 5){
//			readData >> ShowCase[i].Score;
//		}
//		i = 0;
//		while(i < 5){
//			readData >> ShowCase[i].nick;
//		}
//	}
//	readData.close();
//}

void menuConstants(int titleX, int titleY, string nickName, string currentTheme){
		//adding latest time
	time_t now = time(0); 
	gotoxy(0,0); 
	cout<<ctime(&now)<<endl;
		// adding current theme
	gotoxy(32,0);
	cout<<"       ";
	gotoxy(32,0);
	cout<<currentTheme;
		// adding nickName
	gotoxy(6,26);
	cout<<"Nickname: "<<nickName;
		//printing the title
	gotoxy(titleX,titleY);
	cout<<"S N A K E";
}

void snake::info(){
	//definitons 
 whileRunning = true; //defined for while loop
	
	
	//doing stuff 
	
	while(whileRunning){
		mainMenuTheme();
		gotoxy(0,0);
		cout << "June 15 2020";
		gotoxy(32,0);
		cout << "TURKEY";
		gotoxy(12,3);
		cout << "C R E A T O R S";
		gotoxy(12,8);
		cout << "ALPEREN ARSLAN";
		gotoxy(11,10);
		cout << "KEMAL ISMAIL AKCA";
		gotoxy(12,12);
		cout << "ALPEREN ARSLAN";
		gotoxy(12,16);
		cout << "Not misspelled";
		gotoxy(9,18);
		cout << "There is two Alperen";
		gotoxy(8,20);
		cout << "Even surname's are same";
		gotoxy(18,22);
		cout << ":D";
		gotoxy(7,28);
		cout << "Press Anything for Return";
		if(cin.get()) mainMenu();
}
		gotoxy(26,26);
}

void snake::mainMenuTheme(){
	//definitions
	struct Line{
		const char Vertical = 186;
		const char Flat = 205;
		const char LeftUpperCorner = 201;
		const char LeftLowerCorner = 200; 
		const char RightUpperCorner = 187; 
		const char RightLowerCorner = 188;
	}Line;
	
	int startForX = 5, finishForX = 32, startForY = 5, finishForY = 25; //coordinates of menus borders
	
	//doing stuff
	system("cls");
		//drawing borders of menu
	for(int i = startForX ; i <= finishForX ; i++){
		gotoxy(i,startForY);
		cout<<Line.Flat;
		gotoxy(i,finishForY);
		cout<<Line.Flat;
	}
	for(int i = startForY ; i <= finishForY ; i++){
		gotoxy(startForX,i);
		cout<<Line.Vertical;
		gotoxy(finishForX,i);
		cout<<Line.Vertical;
	}
		//drawing corner borders of menu
	gotoxy(startForX,startForY);
	cout<<Line.LeftUpperCorner;
	gotoxy(startForX,finishForY);
	cout<<Line.LeftLowerCorner;
	gotoxy(finishForX,startForY);
	cout<<Line.RightUpperCorner;
	gotoxy(finishForX,finishForY);
	cout<<Line.RightLowerCorner;
}

void snake::changeThemeMenu(){
	//definitions
	const int desertX = 13, desertY = 8;
	const int aquaX = 15, aquaY = 12;
	const int natureX = 13, natureY = 16;
	const int classicX = 12, classicY = 20;
	const int backX = 15, backY = 24;
	byte menuItem = 1, sliderNumber = 4;
	int variableX = 8, variableY = 8;
	 whileRunning = true; //for while loop
	const char menuPointer = 175;
	
	//doing stuff
	mainMenuTheme();
	gotoxy(variableX,variableY);
	cout << menuPointer;

	while(whileRunning){
		menuConstants(titleX, titleY, nickName, currentTheme);
			//printing menu items
		gotoxy(desertX, desertY);
		cout<<"D E S E R T";
		gotoxy(aquaX, aquaY);
		cout<<"A Q U A ";
		gotoxy(natureX, natureY);
		cout<<"N A T U R E";
		gotoxy(classicX,classicY);
		cout<< "C L A S S I C";
		gotoxy(backX,backY);
		cout<<"B A C K";
		
		system("pause>nul"); // the >nul bit causes it the print no message
		
		if((GetAsyncKeyState(VK_DOWN)) && (variableY != backY)){
			gotoxy(variableX,variableY);
			cout << " ";
			variableY += sliderNumber;
			gotoxy(variableX,variableY);
			cout << menuPointer;
			menuItem++;		
		}
		
		if((GetAsyncKeyState(VK_UP)) && (variableY != desertY)){
			gotoxy(variableX,variableY);
			cout << "  ";
			variableY -= sliderNumber;
			gotoxy(variableX,variableY);
			cout << menuPointer;
			menuItem--;		
		}
			
		if(GetAsyncKeyState(VK_RETURN)){ // Enter key pressed
			switch(menuItem){
				case 1: 
					system("color 4E");
					currentTheme = "desert";
					break;
				case 2: 
					system("color 1B");
					currentTheme = "aqua";
					break;
				case 3: 
					system("color 2B");
					currentTheme = "nature";
					break;
				case 4:
					system("color 7");
					currentTheme = "classic";
					break;
				case 5: 
					settings();
					break;
				default:
					break;
			}	
		}
	}
}

void snake::mainMenu(){
	//definitions
	const int playX = 16, playY = 8;
	const int skorboardX = 11, skorboardY = 12;
	const int settingsX = 12, settingsY = 16;
	const int infoX = 16, infoY = 20; 
	const int quitX = 16, quitY = 24;
	byte menuItem = 1, sliderNumber = 4;
	int variableX = 8, variableY = 8;
    whileRunning = true; //defined for while loop
	const char menuPointer = 175;
	
	//doing stuffs
	mainMenuTheme();
	gotoxy(variableX,variableY);
	cout << menuPointer;
	while(whileRunning){
		menuConstants(titleX, titleY, nickName, currentTheme);
			//printing menu items
		gotoxy(playX,playY);
		cout<<"P L A Y";
		gotoxy(skorboardX,skorboardY);
		cout<<"S K O R B O A R D";
		gotoxy(settingsX,settingsY);
		cout<<"S E T T I N G S";
		gotoxy(infoX,infoY);
		cout<< "I N F O";
		gotoxy(quitX,quitY);
		cout<<"Q U I T";
		
		system("pause>nul"); // the >nul bit causes it the print no message
	
		if((GetAsyncKeyState(VK_DOWN)) && (variableY != quitY)){
			gotoxy(variableX,variableY);
			cout << " ";
			variableY += sliderNumber;
			gotoxy(variableX,variableY);
			cout << menuPointer;
			menuItem++;		
		}
		
		if((GetAsyncKeyState(VK_UP)) && (variableY != playY)){
			gotoxy(variableX,variableY);
			cout << "  ";
			variableY -= sliderNumber;
			gotoxy(variableX,variableY);
			cout << menuPointer;
			menuItem--;		
		}
		
		if(GetAsyncKeyState(VK_RETURN)){ // Enter key pressed
			switch(menuItem){
				case 1:{
					startGame();
          			whileRunning=false;         			
          			break;}
				case 2:{
					
					break;}
				case 3: {
					settings();
					break;}
				case 4:{
					info();
					break;}
				case 5: {
//					scoreboardSave();
					gotoxy(6,28);
					cout << "The program has now terminated!!";
					exit(1);
					break;}
				default:
					break;
			}	
		}
	}
}

void snake::nickNameEntrance(){
	//definitions
	const int titleX = 15, titleY = 3; //coordinates of title 
	const int infoX = 12 , infoY = 12;
	const int infoUnderlineStartX = 10 , infoUnderlineFinishX = 26, infoUnderlineY = 13 ;
	const char infoUnderline = 196;
	const int nickEntranceX = 11, nickEntranceY = 15;
	byte menuItem = 1;
	int variableX = 8, variableY = 8;
	 whileRunning = true; //defined for while loop
	const char menuPointer = 175;
	
	//doing stuff
	mainMenuTheme();
	while(whileRunning){
		menuConstants(titleX, titleY, nickName, currentTheme);
		
		gotoxy(infoX,infoY);
		cout<<"ENTER NICKNAME";
		gotoxy(infoUnderlineStartX,infoUnderlineY);
		for(int i=infoUnderlineStartX ; i <= infoUnderlineFinishX ; i++)
			cout <<	infoUnderline;
			
		gotoxy(nickEntranceX,nickEntranceY);
		cin>>nickName;
		mainMenu();
		break;
	}
}

void snake::settings(){
	//definitions
	const int cleanSkorboardX = 11, cleanSkorboardY = 8;
	const int changeNickNameX = 11, changeNickNameY = 12;
	const int changeThemeX = 13, changeThemeY = 16;
	const int backX = 15, backY = 20;
	byte menuItem = 1, sliderNumber = 4;
	int variableX = 8, variableY = 8;
	 whileRunning = true; //defined for while loop
	const char menuPointer = 175;
	
	//doing stuff
	mainMenuTheme();
	gotoxy(variableX,variableY);
	cout << menuPointer;

	while(whileRunning){
		menuConstants(titleX, titleY, nickName, currentTheme);
			//printing menu items
		gotoxy(cleanSkorboardX,cleanSkorboardY);
		cout<<"Clean  Skorboard";
		gotoxy(changeNickNameX,changeNickNameY);
		cout<<"Change Nick Name";
		gotoxy(changeThemeX,changeThemeY);
		cout<<"Change Theme";
		gotoxy(backX,backY);
		cout<<"B A C K";
		
		system("pause>nul"); // the >nul bit causes it the print no message
		
		if((GetAsyncKeyState(VK_DOWN)) && (variableY != backY)){
			gotoxy(variableX,variableY);
			cout << " ";
			variableY += sliderNumber;
			gotoxy(variableX,variableY);
			cout << menuPointer;
			menuItem++;		
		}
		
		if((GetAsyncKeyState(VK_UP)) && (variableY != cleanSkorboardY)){
			gotoxy(variableX,variableY);
			cout << "  ";
			variableY -= sliderNumber;
			gotoxy(variableX,variableY);
			cout << menuPointer;
			menuItem--;		
		}
			
		if(GetAsyncKeyState(VK_RETURN)){ // Enter key pressed
			switch(menuItem){
				case 1:
//					for(int i = 0 ; i < 5 ; i++){
//						ShowCase[i].Score = 0;
//						ShowCase[i].nick = " ";
//					}
					gotoxy(6,28);
					cout << "Skorboard Cleaned";
					break;
				case 2: 
					nickNameEntrance();
					break;
				case 3: 
					changeThemeMenu();
					break;
				case 4: 
					mainMenu();
					break;
				default:
					break;
			}	
		}
	}
}

void snake::entryAnimation(){
	gotoxy(5,5);cout << "         ___________    ______________"<< endl;Sleep(120);
	gotoxy(5,6);cout << "        /      |   |   /   /|    |    \\"<< endl;Sleep(120);
	gotoxy(5,7);cout << "       /       |   |  /   / |    |     \\"<< endl;Sleep(120);
	gotoxy(5,8);cout << "      /        |   | /   /  |    |      \\"<< endl;Sleep(120);
	gotoxy(5,9);cout << "     /   //|   |   |/   /   |    |   \\   \\"<< endl;Sleep(120);
	gotoxy(5,10);cout << "    /   // |   |       /    |    |   |\\   \\"<< endl;Sleep(120);
	gotoxy(5,11);cout << "   /   //__|   |       \\    |    |   |_\\   \\"<< endl;Sleep(120);
	gotoxy(5,12);cout << "  /   //___|   |   |\\   \\   |    |   |__\\   \\"<< endl;Sleep(120);
	gotoxy(5,13);cout << " /   //    |   |   | \\   \\  |    |   |   \\   \\"<< endl;Sleep(120);
 	gotoxy(5,14);cout << "/___//     |___|___|  \\___\\ |____|___|    \\___\\"<< endl;Sleep(120);

	gotoxy(14,16);
	cout << "... P R O D U C T I O N S ...";
	Sleep(2000);
	system("cls");
	
	gotoxy(0,5);cout << "     _____  _____  ______________________________________" << endl;Sleep(120);
 	gotoxy(0,6);cout << "    /     \\ |    \\ |    |    ___    |   |  /   /|        |" << endl;Sleep(120);
 	gotoxy(0,7);cout << "   /     __\\|     \\|    |   |   |   |   | /   / |    ____|" << endl;Sleep(120);
 	gotoxy(0,8);cout << "   \\    \\   |           |   |___|   |   |/   /  |   |____ " << endl;Sleep(120);
 	gotoxy(0,9);cout << "    \\    \\  |           |    ___    |       /   |        |" << endl;Sleep(120);
 	gotoxy(0,10);cout << "     \\    \\ |    |\\     |   |   |   |       \\   |    ____|" << endl;Sleep(120);
 	gotoxy(0,11);cout << "   ___\\    \\|    | \\    |   |   |   |   |\\   \\  |   |___" << endl;Sleep(120);
 	gotoxy(0,12);cout << "  \\        /|    |  |   |   |   |   |   | \\   \\ |        |" << endl;Sleep(120);
 	gotoxy(0,13);cout << "   \\______/ |____|  |___|___|   |___|___|  \\___\\|________|" << endl;Sleep(120);
 	
 	gotoxy(22,16);
	cout << "C L A S S I C";
	Sleep(2000);}

void snake::gameOverMenu(){
	//definitions
	struct Line{
		const char Vertical = 186;
		const char Flat = 205;
		const char LeftUpperCorner = 201;
		const char LeftLowerCorner = 200; 
		const char RightUpperCorner = 187; 
		const char RightLowerCorner = 188;
	}Line;
	
	int startForX = 5, finishForX = 32, startForY = 5, finishForY = 15; //coordinates of menus borders
	
	//doing stuff
	system("cls");
		//drawing borders of menu
	for(int i = startForX ; i <= finishForX ; i++){
		gotoxy(i,startForY);
		cout<<Line.Flat;
		gotoxy(i,finishForY);
		cout<<Line.Flat;
	}
	for(int i = startForY ; i <= finishForY ; i++){
		gotoxy(startForX,i);
		cout<<Line.Vertical;
		gotoxy(finishForX,i);
		cout<<Line.Vertical;
	}
		//drawing corner borders of menu
	gotoxy(startForX,startForY);
	cout<<Line.LeftUpperCorner;
	gotoxy(startForX,finishForY);
	cout<<Line.LeftLowerCorner;
	gotoxy(finishForX,startForY);
	cout<<Line.RightUpperCorner;
	gotoxy(finishForX,finishForY);
	cout<<Line.RightLowerCorner;
	
	gotoxy(12,3);
	cout << "G A M E O V E R";
	gotoxy(12,10);
	cout << "S C O R E : " << score;
	Sleep(2000);
}

//void snake::scoreboard(){
//	struct Line{
//		const char Vertical = 186;
//		const char Flat = 205;
//		const char LeftUpperCorner = 201;
//		const char LeftLowerCorner = 200; 
//		const char RightUpperCorner = 187; 
//		const char RightLowerCorner = 188;
//	}Line;
//	
//	int startForX = 5, finishForX = 32, startForY = 5, finishForY = 25; //coordinates of menus borders
//	
//	//doing stuff
//	system("cls");
//		//drawing borders of menu
//	for(int i = startForX ; i <= finishForX ; i++){
//		gotoxy(i,startForY);
//		cout<<Line.Flat;
//		gotoxy(i,finishForY);
//		cout<<Line.Flat;
//	}
//	for(int i = startForY ; i <= finishForY ; i++){
//		gotoxy(startForX,i);
//		cout<<Line.Vertical;
//		gotoxy(finishForX,i);
//		cout<<Line.Vertical;
//	}
//		//drawing corner borders of menu
//	gotoxy(startForX,startForY);
//	cout<<Line.LeftUpperCorner;
//	gotoxy(startForX,finishForY);
//	cout<<Line.LeftLowerCorner;
//	gotoxy(finishForX,startForY);
//	cout<<Line.RightUpperCorner;
//	gotoxy(finishForX,finishForY);
//	cout<<Line.RightLowerCorner;
//	const int firstX = 12, firstY = 8;
//	const int secondX = 12, secondY = 12;
//	const int thirdX = 12, thirdY = 16;
//	const int fourthX = 12, fourthY = 20; 
//	const int fifthX = 12, fifthY = 24;
//	gotoxy(firstX,firstY);
//	cout<<"1. " << ShowCase[4].nick << " - " << ShowCase[4].Score;
//	gotoxy(secondX,secondY);
//	cout<<"2. " << ShowCase[3].nick << " - " << ShowCase[3].Score;
//	gotoxy(thirdX,thirdY);
//	cout<<"3. " << ShowCase[2].nick << " - " << ShowCase[2].Score;
//	gotoxy(fourthX,fourthY);
//	cout<<"4. " << ShowCase[1].nick << " - " << ShowCase[1].Score;
//	gotoxy(fifthX,fifthY);
//	cout<<"5. " << ShowCase[0].nick << " - " << ShowCase[0].Score;
//	gotoxy(6,26);
//	cout << "Press Anything for Return";
//	if(cin.get()) mainMenu();
//}

void snake::readKeyboard(){   
	if( GetAsyncKeyState(VK_RIGHT)){
		if(snakeTail[0].yon!=left){
			snakeTail[0].yon=right;}
	}
	
	else if( GetAsyncKeyState(VK_LEFT)){
		if(snakeTail[0].yon!=right){
			snakeTail[0].yon=left;}
	}
	
	else if( GetAsyncKeyState(VK_UP)){
		if(snakeTail[0].yon!=down){
			snakeTail[0].yon=up;}
	}

	else if( GetAsyncKeyState(VK_DOWN)){
		if(snakeTail[0].yon!=up){
			snakeTail[0].yon=down;}
	}
}
	
void snake::drawGameboard(){
	for(int x=0;x<width;x++){
		for(int y=0;y<height;y++){
			gotoxy(x,y);
			//generating borders
			board[x][0]=karakter;
			board[0][y]=karakter;
			board[x][height-1]=karakter;
			board[width-1][y]=karakter;
			cout<<board[x][y];
		}
	}
}

void snake::cleanGameboard(){
	for(int x=1;x<width-1;x++){
		for(int y=1;y<height-1;y++){
			board[x][y]=' ';
		}
	}
}

void snake::hideCursor(){
  	HANDLE output;
	output= GetStdHandle(STD_OUTPUT_HANDLE);
  	CONSOLE_CURSOR_INFO ci;
  	ci.bVisible=FALSE;
  	SetConsoleCursorInfo(output,&ci);
}
  
void snake::operator++(){ //overloaded funciton for increasing tail of the snake
	//new tail part has to be attached end of the tail so we are just considering last cell of the snake
	int x=snakeTail[currentTailLength-1].x;
	int y=snakeTail[currentTailLength-1].y;
	direction yon=snakeTail[currentTailLength-1].yon;
	char kar=snakeTail[currentTailLength-1].karakter;
	switch(snakeTail[currentTailLength-1].yon){
		case right:{
			x--;
			break;
		}
		case left:{
			x++;
			break;
		}
		case up:{
			y++;
			break;
		}
		case down:{
			y--;
			break;
		}
	}
	snakeTail[currentTailLength].x=x;
	snakeTail[currentTailLength].y=y;
	snakeTail[currentTailLength].yon=yon;
	snakeTail[currentTailLength].karakter=kar;
	currentTailLength++;
}

void snake::defaultSnake(){
	//initialazing snake
	currentTailLength=1;
    snakeTail[0].x=20;
    snakeTail[0].y=10;
    snakeTail[0].yon=right;
    snakeTail[0].karakter=karakter;
    //initializing fruit
    fruitX=rand()%(width-2)+1;
	fruitY=rand()%(height-2)+1;
	score=0;
}

void snake::drawSnake(){
	for(int i=0;i<currentTailLength;i++){
		int x=snakeTail[i].x;
		int y=snakeTail[i].y;
		board[x][y]=snakeTail[i].karakter;
	}
}

void snake::moveSnake(){
	for(int i=0;i<currentTailLength;i++){
		if(snakeTail[i].yon==right){
			snakeTail[i].x++;
		}
		
		else if(snakeTail[i].yon==left){
			snakeTail[i].x--;		
		}
		
		else if(snakeTail[i].yon==up){
			snakeTail[i].y--;
		}	
			
		else if(snakeTail[i].yon==down){
			snakeTail[i].y++;
		}
	}
	
	for(int i=currentTailLength-1;i>0;i--){
		snakeTail[i].yon=snakeTail[i-1].yon;
	}
}

void snake::fruit(){
	board[fruitX][fruitY]=178;
	if(snakeTail[0].x==fruitX&&snakeTail[0].y==fruitY){
		fruitX=rand()%(width-2)+1;//generating random coordinates for fruit in sepecfied interval
		fruitY=rand()%(height-2)+1;
		operator++();
		score=score+10;
	}
}

bool snake::gameOver(){
	if(snakeTail[0].x==width-1||snakeTail[0].y==height-1){
		return 1;
	}
	
	else if(snakeTail[0].x==0||snakeTail[0].y==0){
		return 1;
	}
    
	for(int i=1;i<=currentTailLength;i++){
    	if(snakeTail[0].x==snakeTail[i].x&&snakeTail[0].y==snakeTail[i].y){
        	return 1;
		}
	}
	
	return 0;
}

//void snake::showcaseSave(){
//	int i = 0;
//	int minScore = ShowCase[i].Score;
//	for(i = 4 ; i >= 0 ; i--){
//		if(ShowCase[i].Score == 0){
//			ShowCase[i].Score = score;
//			ShowCase[i].nick = nickName;
//			break;
//		}
//	}
//	
//	for(i = 4 ; i >= 0 ; i--){
//		if(score > ShowCase[i].Score){
//			ShowCase[i].Score = score;
//			ShowCase[i].nick = nickName;
//			break;
//		}
//	}
//}

void snake::startGame(){
	struct Line{
			const char Vertical = 186;
			const char Flat = 205;
			const char LeftUpperCorner = 201;
			const char LeftLowerCorner = 200; 
			const char RightUpperCorner = 187; 
			const char RightLowerCorner = 188;
	}Line;
	whileRunning=false;
	system("cls");
	defaultSnake();
    while(1){
    	for(int i = 30 ; i < 50 ; i++){
			gotoxy(i,21);
			cout << Line.Flat;
			gotoxy(i,25);
			cout << Line.Flat;
		}
		for(int i = 21 ; i < 25 ; i++){
			gotoxy(30,i);
			cout << Line.Vertical;
			gotoxy(50,i);
			cout << Line.Vertical;
		}
		gotoxy(30,21);
		cout << Line.LeftUpperCorner;
		gotoxy(30,25);
		cout << Line.LeftLowerCorner;
		gotoxy(50,21);
		cout << Line.RightUpperCorner;
		gotoxy(50,25);
		cout << Line.RightLowerCorner;
		gotoxy(32,23);
		cout<<"S C O R E : "<<score;
  		readKeyboard();
  	    cleanGameboard();
  	    moveSnake();
  	    drawSnake();
  	    fruit();
  	    drawGameboard();
  	    if(gameOver()==1){
  	     	system("cls");
  	     	break;
		}
		Sleep(10);
	  }
//	showcaseSave();
	gameOverMenu();
}

