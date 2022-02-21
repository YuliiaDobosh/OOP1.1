#include "Money.h"
#include <iostream>
using namespace std;
void Money::SetFirst(int value)
{
	first = value;
}
void Money::SetSecond(unsigned int value)
{
	second = value;
}
bool Money::Init(int x, int y)
{
	if (x == 1 || x == 2 || x == 5 || x == 10 || x == 20 || x == 50 || x == 100 || x == 200 || x == 500)
	{
		first = x;
	}
	else
	{
		first = 0;
		return false;
	}
	if (y >= 0)
	{
		second = y;
	}
	else
	{
		second = 0;
		return false;
	}
	return true;

}
void Money::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}
void Money::Read()
{
	int x, y;
	cout << "first = ? ";
	cin >> x;
	do {
		cout << "second = ?";
		cin >> y;
	} while (!Init(x, y));
}
unsigned int Money::summa()
{
	return first * second;
}
