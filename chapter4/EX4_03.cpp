#include <iostream>

using namespace std;

int main()
{
	const int MAX = 80;
	char buffer[MAX];
	int count = 0;

	cout << "Enter a string of less than 80 character : \n";
	cin.getline(buffer, MAX, '\n'); // \n이 될 때까지 문자열을 읽어들인다.

	while (buffer[count] != '\0')
		count++;

	cout << endl
		<< "The string \"" << buffer
		<< "\" has " << count << " characters.";

	cout << endl;
	return 0;
}