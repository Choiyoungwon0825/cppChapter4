// �����͸� ���ڿ��� �ʱ�ȭ�ϱ�
#include <iostream>

using namespace std;

int main()
{
	const char* pstr[] = { "¯��", // ������ �迭 �ʱ�ȭ
		"ö��",
		"����",
		"¯��",
		"�ͱ�",
		"����",

	};

	const char* pstart = "Your lucky star is ";

	int dice = 0;

	cout << endl
		<< " Pick a lucky star!"
		<< " Enter a number between 1 and 6: ";
	cin >> dice;

	cout << endl;
	if (dice >= 1 && dice <= 6)                // �Է� ��ȿ ����
		cout << pstart << pstr[dice - 1];     // �̸� ���

	else
		cout << "Sorry, you haven't got a lucky star."; // ��ȿ���� ���� �Է�

	cout << endl;

	return 0;
}