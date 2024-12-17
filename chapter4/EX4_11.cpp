#include <iostream>
#include <iomanip>
#include <cstdlib>		// exit 함수에 대한 것

using namespace std;

int main()
{
	long* pprime = 0; //소수 배열에 대한 포인터
	long trial = 5; //후보 소수
	int count = 3; // 소수 카운트
	int found = 0; // 소수 발견되었을 때를 알림
	int max = 0; // 요구되는 소수의 개수

	cout << endl
		<< " Enter the number of primes you would like (at least 4): ";
	cin >> max;			// 요구되는 소수의 개수

	if (max < 5) // 사용자 입력을 검사하여 그것이 5보다 적을 경우
		max = 4; // 그것을 4로 변경

	if (!(pprime = new long[max]))
	{
		cout << endl
			<< "Memory allocation failed.";
		exit(1);				// 프로그램을 끝낸다.
	}

	*pprime = 2; // 3개의 기초 소수 삽입
	*(pprime + 1) = 3;
	*(pprime + 2) = 5;

	do
	{
		trial += 2;	// 검사할 다음 값
		found = 0;	// found를 indicator로 설정
		for (int i = 0; i < count; i++)	// 기존의 소수로 나누기
		{
			found = (trial % *(pprime + i)) == 0; // 0으로 나누어지면 True
			if (found)	// 만약 나눗셈이 0으로 나눠떨어지면 소수가 아님.
				break;
		}
		if (found == 0)
			*(pprime + count++) = trial;
	} while (count < max);

	// 다섯개의 소수를 한줄에 출력
	for (int i = 0; i < max; i++)
	{
		if (i % 5 == 0)

			cout << endl;
		cout << setw(10) << *(pprime + i);
	}
	delete[] pprime;
	cout << endl;
	return 0;

}
