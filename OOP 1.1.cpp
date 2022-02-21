#include <iostream>
#include "Money.h"
using namespace std;
Money makeNumber2(int x, int y)
{
	Money nn;
	if (!nn.Init(x, y))
		cout << "wrong argument to Init (second)" << endl;
	return nn;
}
int main()
{
	Money n;
	n.Init(10, 10);
	n.Display();
	cout << "Sum " << n.summa() << endl;
	Money k;
	k.Read();
	k.Display();
	cout << "Sum " << k.summa() << endl;
	Money i;
	int a, b;
	cout << "first = ? ";
	cin >> a;
	cout << "second = ?";
	cin >> b;
	i = makeNumber2(a, b);
	i.Display();
	cout << "Sum " << i.summa() << endl;
	return 0;
}