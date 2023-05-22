#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>
#define WIDTH 100
#define HEIGHT 25
using namespace std;

int playerPosY, playerPosX;
vector<string>stage(HEIGHT);
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
COORD coordScreen = { 0, 0 };

void InitGame();
void DrawScreen();
void PlayerMove(int deltaY, int deltaX);

int main() {
	char input;
	InitGame();
	DrawScreen();

	while (true)
	{
		input = getch();

		if (input == 'd' && playerPosX < WIDTH - 1) {
			PlayerMove(0, 1);
		}
		else if (input == 'a' && playerPosX > 0) {
			PlayerMove(0, -1);
		}
		else if (input == 'w' && playerPosY > 0) {
			PlayerMove(-1, 0);
		}
		else if (input == 's' && playerPosY < HEIGHT - 1) {
			PlayerMove(1, 0);
		}
		else if (input == '0') {
			break;
		}
		DrawScreen();
	}

	return 0;
}

void InitGame() {
	playerPosY = 0, playerPosX = 0;
	for (int i = 0; i < HEIGHT; i++)for (int j = 0; j < WIDTH; j++)stage[i].push_back('-');
	stage[0][0] = '&';
}

void DrawScreen() {
	SetConsoleCursorPosition(hConsole, coordScreen);
	for (int i = 0; i < HEIGHT; i++)cout << stage[i] << endl;
}

void PlayerMove(int deltaY, int deltaX) {
	stage[playerPosY][playerPosX] = '-';
	stage[playerPosY + deltaY][playerPosX + deltaX] = '&';
	playerPosY += deltaY; playerPosX += deltaX;
}