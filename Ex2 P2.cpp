#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

double g, bal, bill;

	cout << "CUSTOMER'S WATER BILL" << endl;
	cout << "Enter the total gallons reading from the previous month and this month. " << endl;
	cin >> g;
	cout << "Input customer's unpaid balance: " << endl;
	cin >> bal;


	if (bal > 0)
	{
	bill = 35 + (g*1.10) + bal + 20;
	cout << "A late charge of P20 and water demand charage of P35 was added to the bill." << endl; 
	cout << "The current water bill to be paid is: "<<  bill << endl;
	}

	else
	{
	cout << "P35 was added for water demand charge." << endl;
	bill = 35 + (g*1.10);
	cout << "The current water bill to be paid is: " << bill << endl;
	}

	system("pause");
	return 0;

}
