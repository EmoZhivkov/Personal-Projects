/**
*
* Solution to homework task 
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Viktor Stoyanov Mirev
* @idnumber 62231
* @task 5
* @compiler VC
*
*/

#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;

//CONSTANTS
int const MAXIMUM_STAR_NUMBER = 80;
int const MINIMUM_STAR_NUMBER = 3;
int const CONSOLE_WIDTH = 80;//better 100
int const CONSOLE_HEIGHT = 25;//better 40
int const MINIMUM_DISTANCE = 2;
int const MAXIMUM_DISTANCE = 25;//better 35
int const STAR_LENGTH = 6;//better 2
int const FRAME_DELAY = 40;
int const WIND_SPEED = 0; //better 1

//SOME ADDITIONAL INTRO CONSTANTS
int const FINAL_DELAY = 2000;
int const DELAY_BEFORE_M_XMAS = 500;
int const HO_HO_DELAY = 1200;

//DATA TYPES
struct FallingStar
{
	int x;
	int y;
	int distance;
	FallingStar()
	{
		this->x = rand() % CONSOLE_WIDTH;
		this->y = 0;
		this->distance = 0;
	}
};

//FUNCTIONS
void InputHandler(char* symbol, int* numberOfStars);
void LetItDraw(FallingStar stars[MAXIMUM_STAR_NUMBER], int* numberOfStars, char* symbol);
void LetItSnow(char* symbol, int* numberOfStars);
void LetItSnow(char* symbol, int* numberOfStars);
void FunnyIntro();


//User interface and data validation
void InputHandler(char* symbol, int* numberOfStars)
{
	cout << "Falling Stars" << endl;
	while (*numberOfStars<MINIMUM_STAR_NUMBER || *numberOfStars>MAXIMUM_STAR_NUMBER)
	{
		cout << "Please enter the number of the stars (" << MINIMUM_STAR_NUMBER << ", " << MAXIMUM_STAR_NUMBER << ")" << endl;
		cin >> *numberOfStars;
	}
	cout << "Please enter the symbol representing a star" << endl;
	cin >> *symbol;
}


void LetItDraw(FallingStar stars[MAXIMUM_STAR_NUMBER], int* numberOfStars, char* symbol)
{
	HANDLE STD_HANDLE = GetStdHandle(STD_OUTPUT_HANDLE);
	Sleep(FRAME_DELAY);
	system("cls");

	for (size_t i = 0; i < *numberOfStars; i++)
	{
		int x = stars[i].x;
		int y = stars[i].y;
		for (size_t i = 0; i < STAR_LENGTH; i++)
		{
			//I just added wind speed which by default is 0
			COORD coord = { x-i*WIND_SPEED,y - i };
			
			SetConsoleCursorPosition(STD_HANDLE, coord);
			cout << *symbol;

			COORD zero = { 0,0 };
			SetConsoleCursorPosition(STD_HANDLE, zero);
		}
	}
}

void LetItSnow(char* symbol, int* numberOfStars)
{
	FallingStar stars[MAXIMUM_STAR_NUMBER];
	while (true)
	{
		for (int i = 0; i < *numberOfStars; i++)
		{
			if (stars[i].distance == 0)
			{
				stars[i] = FallingStar();
				stars[i].distance = MINIMUM_DISTANCE + rand() % (MAXIMUM_DISTANCE - MINIMUM_DISTANCE);
			}
		}


		LetItDraw(stars, numberOfStars, symbol);


		for (int i = 0; i < *numberOfStars; i++)
		{
			stars[i].distance--;
			stars[i].y++;
			//added an option for wind , which is zero by default
			stars[i].x+=WIND_SPEED;
		}

		
	}
}

void FunnyIntro()
{
	system("cls");
	for (size_t i = 0; i < 3; i++)
	{
		cout << endl;
		cout << endl;
		cout << endl;
		cout << setw(20*(i+1)) << "HO!";
		Sleep(HO_HO_DELAY);
	}
	system("cls");
	for (size_t i = 0; i < 3; i++)
	{
		cout << endl;
		cout << endl;
		cout << endl;
		cout << setw(20*(i+1)) << "LET IT SNOW!!!";
		Sleep(HO_HO_DELAY);
	}
	system("cls");
	Sleep(DELAY_BEFORE_M_XMAS);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << setw(30) << "    Merry XMAS @ by V. MIREV" << endl;
	Sleep(FINAL_DELAY);
	
}


int main()
{
	int numberOfStars = 0;
	char symbol;
	InputHandler(&symbol, &numberOfStars);
	FunnyIntro();
	LetItSnow(&symbol, &numberOfStars);
	return 0;
}