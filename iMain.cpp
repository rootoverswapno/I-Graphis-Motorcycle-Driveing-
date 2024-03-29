#include <iostream>
#include "iGraphics.h"
using namespace std;
#define screen_width 800;
#define screen_height 600;
bool gamestart = false;
bool start = false;
int x = 655, y = 50;
int road_x = 450, road_y = 10;
int moto_x = 700, moto_y = 60;
int rx = 950, ry = 600, dx = 420, dy = 180;
int rx1 = 955, ry1 = 605, dx1 = 398, dy1 = 157;
int themeimage, roadImage, moto;
int sprit1;
int sprit2;
int sprit3;
int sprit1_Y = 600;
int sprit2_y = 650;
int sprit3_y = 650;
int tree1, tree2;
int enviroment;
int SCORE = 0;
int lifeimage;
bool musicon = true;
char score[1000] = "0";
//int roadImage2 = iLoadImage("Images\\road.png");
void spritimage()
{

}
void startimage()
{
	themeimage = iLoadImage("Images\\Front.png");
}

  
void LoadRoadImage()
{
	roadImage = iLoadImage("Images\\road.png");
	moto = iLoadImage("Images\\motorcycle.png");
	sprit1 = iLoadImage("Images\\carsprit.png");
	sprit2 = iLoadImage("Images\\carsprit2.png");
	sprit3 = iLoadImage("Images\\carsprit3.png");
	//tree1 = iLoadImage("Images\\tree1.png");
	// ;;;;//tr.jnmee2 = iLoadImage("Images\\tree2.png");
	lifeimage = iLoadImage("Images\\life.png");
	                                                                                                                                                       2 
//	enviroment = iLoadImage("Images\\enviroment.png");
} 
//void displayRoadImage()
//{
	//iShowImage(450, 0, 500, 766, roadImage);
//}

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	if (!gamestart)
	{
		iShowImage(0, 0, 1368, 766, themeimage);
	}
	if (gamestart)
	{


		iShowImage(road_x, road_y, 500, 768, roadtImage);
		
		iShowImage(road_x, road_y+768, 500, 768, roadImage);
		iShowImage(moto_x, moto_y, 100, 130, moto);
		iShowImage(620, sprit1_Y, 80, 105, sprit1);
		iShowImage(800, sprit2_y, 40, 105, sprit2);
		iShowImage(560, sprit3_y, 55, 95, sprit3);
        //iShowImage(200,400, 55, 95, lifeimage);
	}
	if (gamestart)
	{
		iSetColor(0, 255, 255);
		iFilledRectangle(rx, ry, dx, dy);
		iSetColor(0, 0, 0);
		iFilledRectangle(rx1, ry1, dx1, dy1);
		iSetColor(0, 0, 255);
		iFilledRectangle(955, 720, 398, 5);
		iSetColor(0, 255, 0);
		iFilledRectangle(1150, 600, 5, 500);
		iSetColor(0, 255, 0);
		//iFilledRectangle(1150, 500, 500, 500);
		iFilledRectangle(1150, 500, 0, 500);
		iSetColor(0, 255, 0);
		iFilledRectangle(955, 720, 400, 50);
		iSetColor(0, 255, 0);
		iFilledRectangle(0, 670, 450, 300);
		iSetColor(255, 255, 255); 
		//iFilledRectangle(0, 720, 450, 300);
		//iSetColor(0, 0, 255);
		iFilledRectangle(0, 720, 450, 300);
		iSetColor(255, 0, 0);
		iFilledRectangle(0, 720, 200, 500);
		iSetColor(0, 255, 255);
	
		
	}
	if (gamestart)
	{
		iSetColor(255, 0, 0);
		iText(1010, 735, " SCORE ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(1040, 660, score, GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 0, 0);
		iText(1180, 735, "HIGH SCORE ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(1220, 660, "1720", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 255, 0);
		iText(80, 735, "LIFE->", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 255, 255);
		iText(300, 735, "  5  ", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 0, 0);
		iText(70, 685, "LEVEL", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 255, 255);
		iText(260, 685, "MEDIUM", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (gamestart)
	{
		iSetColor(255, 0, 0);
		//iFilledRectangle();
	}
	//if (gamestart)
	//{
		//iShowImage(470, 600, 40, 80, tree1);
		//iShowImage(470, 400, 55, 80, tree2);
	//}
	//if (gamestart)
	{
		//iShowImage(0,0, 450, 768, enviroment);
	}

	
	
	
	//displayRoadImage();

}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{ 
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == 13)
	{
		gamestart = true;
	}
	if (key == 40)
	{
		start = true;
	}
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
		if (moto_x <= 850){
			moto_x += 10;
		}
	}
	if (key == GLUT_KEY_LEFT)
	{
		if (moto_x >= 450){
			moto_x -= 10;
		}
	}
	if (key == GLUT_KEY_UP)
	{
		if (moto_y <=768-150){
			moto_y += 10;
		}
	}
	if (key == GLUT_KEY_DOWN)
	{
		if (moto_y >= 0){
			moto_y -= 10;
		}
	}
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}
void change(){
	
	road_y -= 40;
	if (road_y <= -768)
		road_y = 0; 
	SCORE++;
	_itoa_s(SCORE, score, 10);

}
void carchange()
{
	sprit1_Y += 10;
	if (sprit1_Y >=768)
		sprit1_Y = 0;
	sprit2_y -= 10;
	if (sprit2_y <= 0)
	sprit2_y = 768;
	sprit3_y -= 10;
	if (sprit3_y <= 0)
		sprit3_y = 768;
	moto_y += 10;
	if (moto_y <= 0)
		moto_y = 768;
		 
	}
void treechange()
{
 	
}

	

int main()
{
	
	
	iSetTimer(150, change); 
	iSetTimer(150, carchange);
	//iSetTimer(150, treechange);
	///srand((unsigned)time(NULL));
	iInitialize(1366,768, "Project Title");
	
	startimage();
	LoadRoadImage();
	if (!gamestart)
	{
		//start sound game;
		PlaySound("music//gm.wav", NULL, SND_LOOP | SND_ASYNC);
	}
	if (musicon)
	{
		//PlaySound("music\\game.wav", NULL,SND_LOOP| SND_ASYNC);
	}
	
	///updated see the documentations
	iStart();
	return 0;
}