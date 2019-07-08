#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

	int c;
	for (c = 1; c <= 30;)
	{
		if (c <= 10)
		{
		cout << c << ",";
		}

		else if (c > 10 && c <=30)
		{
		cout << (c = c + 1) << ",";
		}

		c++;
}
system("pause");
return 0;
}
