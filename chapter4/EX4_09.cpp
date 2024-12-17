//소수 계산하기

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int MAX = 100;	// 필요한 소수의 개수
	long primes[MAX] = { 2,3,5 };	// 정의된 처음의 세 개의 소수
	long trial = 5;					// 후보 소수
	int count = 3;					// 찾아진 소수에 대한 카운트
	int found = 0;					// 소수가 발견되었을 때를 알림.

	do
	{
		trial += 2;		// 검사할 다음 값
		found = 0;      // found를 indicator로 설정한다
		for (int i = 0; i < count; i++) // 기존 소수로 나누기
		{
			found = (trial % *(primes + i)) == 0;
			// 0으로 나눠지면 True
			if (found) // 0으로 떨어지면 
				break; // 소수가 아님
		}
		if (found == 0)
			*(primes + count++) = trial;

	} while (count < MAX);

	// 5개의 소수 한줄 출력
	for (int i = 0; i < MAX; i++)
	{
		if (i % 5 == 0)
			cout << endl;
		cout << setw(10) << *(primes + i);

	}
	cout << endl;

	return 0;
}