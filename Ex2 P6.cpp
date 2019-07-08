#include<iostream>
#include<conio.h>

using namespace std;

int main ()
{
	int n, sum, num;

	
	cout << "Enter a number: ";
	cin >> num;

	while (num > 0)
		{
		for (n=1; n<=num; n++)
		{
				sum = (num*(num+1))/2;
		}
			cout << "The sum of all whole numbers from 1 to " << num << " is "<< sum << endl;
			cout << "Enter a number: ";
			cin >> num;
		}
		cout << "Thank you!" << endl;
		
	system("pause");
return 0;
}
