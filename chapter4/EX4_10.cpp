// �����͸� ����Ͽ� ���ڿ� ���� ����

#include <iostream>

using namespace std;

int main()
{
	const int MAX = 80; // �迭�� �ִ� ����
	char buffer[MAX];	// �Է� ����
	char* pbuffer = buffer;	// �迭 ���ۿ� ���� ������

	cout << endl
		<< "Enter a string of less than "
		<< MAX << " characters:"
		<< endl;

	cin.getline(buffer, MAX, '\n'); // \n�� �� ������ ���ڿ��� �д´�.

	while (*pbuffer)
		pbuffer++;

	cout << endl
		<< "The string \"" << buffer
		<< "\"has  " << pbuffer - buffer << " characters.";

	cout << endl;
	return 0;

}