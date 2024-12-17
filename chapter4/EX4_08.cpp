#include <iostream>

using namespace std;

int main()
{
	const char* pstr[] = {
		"Â¯±¸",
		"Ã¶¼ö",
		"À¯¸®",
		"Â¯¾Æ",
		"¸Í±¸",
		"ÈÆÀÌ"
	};

	const char* pstart = "Your lucky star is ";

	int count = (sizeof pstr) / (sizeof pstr[0]); // ¹è¿­ ¿ä¼ÒÀÇ°³¼ö

	cout << (sizeof pstr) << "is sizeof pstr\n" << (sizeof pstr[0]) << "is sizeof pstr[0]\n";

	int dice = 0;

	cout << endl
		<< " Pick a lucky star!"
		<< " Enter a number between 1 and " << count << ": ";
	cin >> dice;

	cout << endl;
	if (dice >= 1 && dice <= count)
		cout << pstart << pstr[dice - 1];
	else
		cout << "Sorry, you haven't got a lucky star.";

	cout << endl;
	return 0;
}