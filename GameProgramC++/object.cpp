#include"object.h"
#include<iostream>

MyClass::MyClass(int a) {
	num = a;
}

void MyClass::PrintMoji() {
	std::cout << num;
}

