// 포인터 사용하기

#include <iostream>

using namespace std;

int main()
{
	long* pnumber = NULL; // 포인터 선언과 초기화
	long number1 = 55, number2 = 99;
	pnumber = &number1; // 포인터 안에 있는 어드레스를 저장한다.
	*pnumber += 11; // number1을 11만큼 증가시킨다

	cout << endl
		<< "number = " << number1
		<< "    &number = " << hex << pnumber;

	pnumber = &number2; // 포인터를 number2의 어드레스로 변경한다.
	number1 = *pnumber * 10; // number2에 10을 곱한다.

	cout << endl
		<< "number1 = " << dec << number1
		<< "    pnumber = " << hex << pnumber
		<< "    *pnumber = " << dec << *pnumber;

	cout << endl;
	return 0;

}