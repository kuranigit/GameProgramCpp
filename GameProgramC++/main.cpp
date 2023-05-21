#include <iostream>
#include <vector>
#include <conio.h>
#define width 100
#define height 25
using namespace std;
#include "object.h"

int main() {
	char input;
	vector<string>s(height);
	int num1 = 0, num2 = 0;
	for (int i = 0; i < height; i++)for (int j = 0; j < width; j++)s[i].push_back(' ');
	s[0][0] = '*';
	for (int i = 0; i < height; i++)cout << s[i] << endl;

	while (true)
	{
		input = getch();

		if (input == 'd' && num2 < width - 1) {
			s[num1][num2] = ' ';
			s[num1][num2 + 1] = '*';
			system("cls");
			for (int i = 0; i < height; i++)cout << s[i] << endl;
			num2++;
		}
		else if (input == 'a' && num2 > 0) {
			s[num1][num2] = ' ';
			s[num1][num2 - 1] = '*';
			system("cls");
			for (int i = 0; i < height; i++)cout << s[i] << endl;
			num2--;
		}
		else if (input == 'w' && num1 > 0) {
			s[num1][num2] = ' ';
			s[num1 - 1][num2] = '*';
			system("cls");
			for (int i = 0; i < height; i++)cout << s[i] << endl;
			num1--;
		}
		else if (input == 's' && num1 < height - 1) {
			s[num1][num2] = ' ';
			s[num1 + 1][num2] = '*';
			system("cls");
			for (int i = 0; i < height; i++)cout << s[i] << endl;
			num1++;
		}
		else if (input == '0') {
			break;
		}

	}

	return 0;
}

//int main(void)
//{
//	int num;
//
//	char buf[] = "ABCDDEFG";
//	char buf2[] = "123456789";
//
//	//3バイトだけコピー
//	//memcpy(buf, buf2, 3);
//
//	//表示
//	printf("コピー後のbuf文字列→%s\n", buf);
//
//	cin >> num;
//	if(num == 1)memcpy(buf, buf2, 3);
//
//	printf("コピー後のbuf文字列→%s\n", buf);
//
//	return 0;
//}