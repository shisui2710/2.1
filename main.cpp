#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b);
int dif(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main()
{
	int a, b, rez;
	char znak;
	int (*c)(int x, int y) = NULL;

	setlocale(LC_ALL, "Russian");
	cout << "������� ������ �����\n";
	cin >> a;
	cout << "������� ������ �����\n";
	cin >> b;
	cout << "������� �������� ������� ��������� �������� ��� ������� (+ ��������, - ���������, * ���������, / �������)\n";
	cin >> znak;
	switch (znak)
	{
        case '+': c = sum;
		break;
        case '-': c = dif;
		break;
        case '*': c = mul;
		break;
        case '/': c = div;
        break;
	}
	rez = c(a, b);
	cout << "��������� ��������� " << a << " " << znak << " " << b << " = " << rez;
}

int sum(int a, int b)
{
	return(a + b);
}

int dif(int a, int b)
{
	return(a - b);
}

int mul(int a, int b)
{
	return(a * b);
}

int div(int a, int b)
{
	return(a / b);
}
