#include <iostream>
#include <math.h>
#include <corecrt_math_defines.h>

using namespace std;

void ex01();
void ex03();
void ex04();
void ex05();

int main() 
{
	//1�� ����
	//ex01();

	//3�� ����
	//ex03();

	//4�� ����
	//ex04();

	//5�� ����
	ex05();
}

void ex01() 
{
	string firstS;
	string secoudS;

	cout << "ù��° ���ڿ�";
	cin >> firstS;

	cout << "�ι�° ���ڿ�";
	cin >> secoudS;

	if (firstS == secoudS) {
		cout << "����";
	}
	else {
		cout << "�ٸ�";
	}
}

void ex03()
{
	int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (int i = 0; i < sizeof(days) / sizeof(days[0]); i++) {
		cout << i + 1 << "���� " << days[i] << "�ϱ��� �ֽ��ϴ�\n";
	}
}

void ex04()
{
	int num1, num2, num3, num4, num5;
	cout << "������ 5�� �Է��ϼ���\n";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;

	int number[] = { num1 , num2, num3, num4, num5 };

	for (int i = 0; i < sizeof(number) / sizeof(number[0]); i++) 
	{
		if (number[i] == 5) {
			cout << "��ǻ�� ��\n";
			break;
		}

		if (i == sizeof(number[4])) {
			cout << "�̿��� ��\n";
		}
	}
}

void ex05()
{
	int input = 0, total = 0;

	do
	{
		total += input;

		cout << "������ �Է��ϼ���: ";
		cin >> input;

	} while (input != 0);

	cout << "�հ�: " <<total ;
}