#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	char p; 
	int h, b;
	cout << "Package A: P995/mo - 10 hours access to the internet. Additional hours are P20/hr " << endl;
	cout << "Package B: P1495/mo - 20 hours access to the internet. Additional hours are P10/hr " << endl;
	cout << "Package C: P1995/mo - unlimited access to the internet. " << endl << endl;
	
	cout << "Enter the letter of the package: " << endl;
	cin >> p;

	switch(p)
	{

		case 'A':
		case 'a': 
			cout << "How many hours did you use the internet? " << endl;
			cin >> h;
			cout << " " << endl;
			if (h > 10 && h <= 730)
				{
				cout << "An additional P20/hr will be added to your bill." << endl;
				b = 995 + 20*(h - 10);
				cout << "Your total amount due is: " << b << endl;
				}
				
			else if (h <= 10)
				{
				cout << "Total balance amount due is: P995" << endl;
				}
			else
				{
				cout << "Invalid input. " << endl;
				}
			break; 

		case 'B':
		case 'b':
			cout << "How many hours did you use the internet? " << endl;
			cin >> h;
			cout << " " << endl;
			if (h > 20 && h <= 730)
				{
				cout << "An additional P10/hr will be added to your bill." << endl;
				b = 1495 + 10*(h - 20);
				cout << "Total balance amount due is: " << b << endl;
				}

			
			else if (h <= 20)
				{
				cout << "Total balance due is: P1495" << endl;
				}

			else
				{
				cout << "Invalid input." << endl;
				}
			break; 


		case 'C':
		case 'c':
			cout << "Total balance due is: P1995" << endl;
			break;
	}

	system("pause");
	return 0;

}
