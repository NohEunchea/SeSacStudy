#include <iostream>
#include <math.h>
#include <corecrt_math_defines.h>

using namespace std;

void ex01();
void ex03();
void ex04();
void ex05();
void ex06();
void ex07();
void ex08();
void ex09();

int main() 
{
	//1번 문제
	//ex01();

	//3번 문제
	//ex03();

	//4번 문제
	//ex04();

	//5번 문제
	//ex05();

	//6번 문제
	//ex06();

	//7번 문제
	//ex07();

	//8번 문제
	//ex08();

	//9번 문제
	ex09();
}

void ex01() 
{
	string firstS;
	string secoudS;

	cout << "첫번째 문자열";
	cin >> firstS;

	cout << "두번째 문자열";
	cin >> secoudS;

	if (firstS == secoudS) {
		cout << "같음";
	}
	else {
		cout << "다름";
	}
}

void ex03()
{
	int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (int i = 0; i < sizeof(days) / sizeof(days[0]); i++) {
		cout << i + 1 << "월은 " << days[i] << "일까지 있습니다\n";
	}
}

void ex04()
{
	int num1, num2, num3, num4, num5;
	cout << "정수를 5번 입력하세요\n";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;

	int number[] = { num1 , num2, num3, num4, num5 };

	for (int i = 0; i < sizeof(number) / sizeof(number[0]); i++) 
	{
		if (number[i] == 5) {
			cout << "컴퓨터 승\n";
			break;
		}

		if (i == sizeof(number[4])) {
			cout << "이용자 승\n";
		}
	}
}

void ex05()
{
	int input = 0, total = 0;

	do
	{
		total += input;

		cout << "정수를 입력하세요: ";
		cin >> input;

	} while (input != 0);

	cout << "합계: " <<total ;
}

void ex06() {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << j+1;
		}
		for (int n = 0; n < 7-i; n++) {
			cout << "*";
		}
		cout << "\n";
	}
}

void ex07() 
{
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			cout << i << " ";
		}
	}
}

void ex08() 
{
	int num;
	cout << "정수를 입력하시오 : ";
	cin >> num;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cout << i << " ";
		}
	}
} 

void ex09() 
{
	for (int i = 0; i <= 100; i++) {
		if (i % 10 == 0) {
			float Celsius = (i - 32.0) * 5.0 / 9.0;

			cout << i << "\t" << Celsius << "\n";
		}
	}
}
