//�Ҽ� ����ϱ�

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int MAX = 100;	// �ʿ��� �Ҽ��� ����
	long primes[MAX] = { 2,3,5 };	// ���ǵ� ó���� �� ���� �Ҽ�
	long trial = 5;					// �ĺ� �Ҽ�
	int count = 3;					// ã���� �Ҽ��� ���� ī��Ʈ
	int found = 0;					// �Ҽ��� �߰ߵǾ��� ���� �˸�.

	do
	{
		trial += 2;		// �˻��� ���� ��
		found = 0;      // found�� indicator�� �����Ѵ�
		for (int i = 0; i < count; i++) // ���� �Ҽ��� ������
		{
			found = (trial % *(primes + i)) == 0;
			// 0���� �������� True
			if (found) // 0���� �������� 
				break; // �Ҽ��� �ƴ�
		}
		if (found == 0)
			*(primes + count++) = trial;

	} while (count < MAX);

	// 5���� �Ҽ� ���� ���
	for (int i = 0; i < MAX; i++)
	{
		if (i % 5 == 0)
			cout << endl;
		cout << setw(10) << *(primes + i);

	}
	cout << endl;

	return 0;
}