// 포인터를 문자열로 초기화하기
#include <iostream>

using namespace std;

int main()
{
	const char* pstr[] = { "짱구", // 포인터 배열 초기화
		"철수",
		"유리",
		"짱아",
		"맹구",
		"훈이",

	};

	const char* pstart = "Your lucky star is ";

	int dice = 0;

	cout << endl
		<< " Pick a lucky star!"
		<< " Enter a number between 1 and 6: ";
	cin >> dice;

	cout << endl;
	if (dice >= 1 && dice <= 6)                // 입력 유효 검증
		cout << pstart << pstr[dice - 1];     // 이름 출력

	else
		cout << "Sorry, you haven't got a lucky star."; // 유효하지 않은 입력

	cout << endl;

	return 0;
}