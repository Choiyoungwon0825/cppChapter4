﻿#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int MAX = 20;
	double gas[MAX];
	long miles[MAX];
	int count = 0;
	char indicator = 'y';

	while ((indicator == 'y' || indicator == 'Y') && count < MAX)
	{
		cout << endl
			<< "Enter gas quantity: ";
		cin >> gas[count];
		cout << "Enter odometer reading: ";
		cin >> miles[count];

		++count;
		cout << "Do you want to enter another (y or n)> : ";
		cin >> indicator;
	}
	if (count <= 1)
	{
		cout << endl
			<< "Sorry - at least two readings are necessary.";

		return 0;
	}
	for (int i = 1; i < count; i++)
		cout << endl
		<< setw(2) << i << "."
		<< "Gas purchased = " << gas[i] << " gallons"
		<< " resulted in ";

	cout << endl;
	return 0;
}