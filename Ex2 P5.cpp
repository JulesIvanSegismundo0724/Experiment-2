#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

	int n, x=0, y=1, s;
	cout <<"The Fibonacci numbers are ";
	for (n = 0; n < 22; n++)
	{
		if (n <= 1)
		{
		s = n;
		}

		else
		{
		s = x + y;
		x = y;
		y = s;

		}
		cout << s << ",";
}
getch();
return 0;
}
