#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{

	string name = "x";
	float NHours = 0;
	float WagePerHour = 0;
	float pay = 0;
	int cancel = 0;

	cout << setprecision(2) << fixed << showpoint;

	cout << "Please enter the name of the Employee" << endl;
	cin >> name;

	cout << "Please Enter the number of hours the employee worked" << endl;
	cin >> NHours;

	cout << "Please Enter the Hourly wage of the Employee" << endl;
	cin >> WagePerHour;


//	Put if statement here :

	if (NHours <= 40)
	{
		pay = (WagePerHour * NHours);
		cout << pay << endl;
	}
	

	if (NHours > 40) 
	{
	pay = (WagePerHour * 40) + (NHours - 40) * (1.5 * WagePerHour);
	cout << pay << endl;

	}

	system("pause");

	return 0;
}