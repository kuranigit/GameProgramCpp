#include <iostream>
#include <vector>
#include <conio.h>
#define width 100
#define height 25
using namespace std;
#include "object.h"
vector<string>s(height);

void DrawScreen() {
	//system("cls");
	cout << "\033[0;0H";
	for (int i = 0; i < height; i++)cout << s[i] << endl;
	
}

int main() {
	char input;
	int num1 = 0, num2 = 0;
	for (int i = 0; i < height; i++)for (int j = 0; j < width; j++)s[i].push_back('-');
	s[0][0] = '&';
	DrawScreen();

	while (true)
	{
		input = getch();

		if (input == 'd' && num2 < width - 1) {
			s[num1][num2] = '-';
			s[num1][num2 + 1] = '&';
			DrawScreen();
			num2++;
		}
		else if (input == 'a' && num2 > 0) {
			s[num1][num2] = '-';
			s[num1][num2 - 1] = '&';
			DrawScreen();
			num2--;
		}
		else if (input == 'w' && num1 > 0) {
			s[num1][num2] = '-';
			s[num1 - 1][num2] = '&';
			DrawScreen();
			num1--;
		}
		else if (input == 's' && num1 < height - 1) {
			s[num1][num2] = '-';
			s[num1 + 1][num2] = '&';
			DrawScreen();
			num1++;
		}
		else if (input == '0') {
			break;
		}

	}

	return 0;
}
