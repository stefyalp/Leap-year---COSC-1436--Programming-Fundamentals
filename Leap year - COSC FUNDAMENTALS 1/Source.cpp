/*==============================================
Name: Stefania Ascencio
Leap Year COSC 1436 PROGRAMMING FUNDAMENTALS ================================================*/



#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	int month, year;
	cout << "Enter a month (1-12): ";
	cin >> month;
	cin.ignore();
	cout << "Enter a year: ";
	cin >> year;
	cin.ignore();
	switch (month)
	{
	case 1:cout << " January " << year << " has 31 days." << endl;
		break;
	case 2:
		if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)//Formula for leap year
			cout << " February " << year << " has 29 days." << endl;
		else
			cout << " February " << year << " has 28 days." << endl;
		break;
	case 3: cout << " March " << year << " has 31 days." << endl;
		break;
	case 4: cout << " April " << year << " has 30 days." << endl;
		break;
	case 5: cout << " May " << year << " has 31 days." << endl;
		break;
	case 6: cout << " June " << year << " has 30 days." << endl;
		break;
	case 7: cout << " July " << year << " has 31 days." << endl;
		break;
	case 8: cout << " August " << year << " has 31 days." << endl;
		break;
	case 9: cout << " September " << year << " has 30 days." << endl;
		break;
	case 10: cout << " October " << year << " has 31 days." << endl;
		break;
	case 11: cout << " November " << year << " has 30 days." << endl;
		break;
	case 12: cout << " December " << year << " has 31 days." << endl;
		break;
	}
	system("pause");
	return 0;
}
