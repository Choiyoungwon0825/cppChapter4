// ������ ����ϱ�

#include <iostream>

using namespace std;

int main()
{
	long* pnumber = NULL; // ������ ����� �ʱ�ȭ
	long number1 = 55, number2 = 99;
	pnumber = &number1; // ������ �ȿ� �ִ� ��巹���� �����Ѵ�.
	*pnumber += 11; // number1�� 11��ŭ ������Ų��

	cout << endl
		<< "number = " << number1
		<< "    &number = " << hex << pnumber;

	pnumber = &number2; // �����͸� number2�� ��巹���� �����Ѵ�.
	number1 = *pnumber * 10; // number2�� 10�� ���Ѵ�.

	cout << endl
		<< "number1 = " << dec << number1
		<< "    pnumber = " << hex << pnumber
		<< "    *pnumber = " << dec << *pnumber;

	cout << endl;
	return 0;

}