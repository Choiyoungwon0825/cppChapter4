#include <iostream>

using namespace std;

int main()
{
	const int MAX = 80;
	char buffer[MAX];
	int count = 0;

	cout << "Enter a string of less than 80 character : \n";
	cin.getline(buffer, MAX, '\n'); // \n�� �� ������ ���ڿ��� �о���δ�.

	while (buffer[count] != '\0')
		count++;

	cout << endl
		<< "The string \"" << buffer
		<< "\" has " << count << " characters.";

	cout << endl;
	return 0;
}