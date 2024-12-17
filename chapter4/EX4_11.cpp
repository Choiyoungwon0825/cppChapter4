#include <iostream>
#include <iomanip>
#include <cstdlib>		// exit �Լ��� ���� ��

using namespace std;

int main()
{
	long* pprime = 0; //�Ҽ� �迭�� ���� ������
	long trial = 5; //�ĺ� �Ҽ�
	int count = 3; // �Ҽ� ī��Ʈ
	int found = 0; // �Ҽ� �߰ߵǾ��� ���� �˸�
	int max = 0; // �䱸�Ǵ� �Ҽ��� ����

	cout << endl
		<< " Enter the number of primes you would like (at least 4): ";
	cin >> max;			// �䱸�Ǵ� �Ҽ��� ����

	if (max < 5) // ����� �Է��� �˻��Ͽ� �װ��� 5���� ���� ���
		max = 4; // �װ��� 4�� ����

	if (!(pprime = new long[max]))
	{
		cout << endl
			<< "Memory allocation failed.";
		exit(1);				// ���α׷��� ������.
	}

	*pprime = 2; // 3���� ���� �Ҽ� ����
	*(pprime + 1) = 3;
	*(pprime + 2) = 5;

	do
	{
		trial += 2;	// �˻��� ���� ��
		found = 0;	// found�� indicator�� ����
		for (int i = 0; i < count; i++)	// ������ �Ҽ��� ������
		{
			found = (trial % *(pprime + i)) == 0; // 0���� ���������� True
			if (found)	// ���� �������� 0���� ������������ �Ҽ��� �ƴ�.
				break;
		}
		if (found == 0)
			*(pprime + count++) = trial;
	} while (count < max);

	// �ټ����� �Ҽ��� ���ٿ� ���
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
