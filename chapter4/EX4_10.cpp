// 포인터를 사용하여 문자열 문자 세기

#include <iostream>

using namespace std;

int main()
{
	const int MAX = 80; // 배열의 최대 차원
	char buffer[MAX];	// 입력 버퍼
	char* pbuffer = buffer;	// 배열 버퍼에 대한 포인터

	cout << endl
		<< "Enter a string of less than "
		<< MAX << " characters:"
		<< endl;

	cin.getline(buffer, MAX, '\n'); // \n이 올 때까지 문자열을 읽는다.

	while (*pbuffer)
		pbuffer++;

	cout << endl
		<< "The string \"" << buffer
		<< "\"has  " << pbuffer - buffer << " characters.";

	cout << endl;
	return 0;

}