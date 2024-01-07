#include <iostream>
#include <math.h>
#include <corecrt_math_defines.h>

using namespace std;

void ex06();
void ex07();
void ex08();

int main() 
{
	//6번 문제
	//ex06();

	//7번 문제
	//ex07();

	//8번 문제
	ex08();
}

void ex06()
{
	int hour;
	cout << "시 : ";
	cin >> hour;

	int minute;
	cout << "분 : ";
	cin >> minute;

	int second;
	cout << "초 : ";
	cin >> second;

	cout << "전체 초 : " << (hour * 3600) + (minute * 60) + second;
}

void ex07() 
{
	float radius;
	cout << "반지름 : ";
	cin >> radius;

	float surface;
	cout << "표면적 : " << pow(radius , 2) * M_PI * 4 << "\n";	//pow(x,y) y의 거듭제곱에 대한 x의 값 계산

	float volume;
	cout << "부피 : " << pow(radius, 3) * M_PI * 4/3;
}

void ex08()
{
	int q1Score;
	cout << "퀴즈	#1 성적: ";
	cin >> q1Score;

	int q2Score;
	cout << "퀴즈	#2 성적: ";
	cin >> q2Score;

	int q3Score;
	cout << "퀴즈	#3 성적: ";
	cin >> q3Score;

	int middleTest;
	cout << "중간고사: ";
	cin >> middleTest;

	int finalTest;
	cout << "기말고사: ";
	cin >> finalTest;

	cout << "성적총합: " << q1Score + q2Score + q3Score + middleTest + finalTest;
}
