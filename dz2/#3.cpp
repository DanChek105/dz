#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, des = 0, mil = 1, tis = 0;
	cin >> a;
	if (a > 10000000)
	{
		cout << "������";
		return 0;
	}
	if (a == 0)
	{
		cout << "����";
		return 0;
	}
	switch (a / 10000000)
	{
	case 1: cout << "������ ���������" << ' ';
		mil = 10;
		break;
	default: break;
	}
	switch ((a / 1000000) % 10)
	{
	case 1: cout << "���� �������" << ' ';
		break;
	case 2: cout << "��� ��������" << ' ';
		break;
	case 3: cout << "��� ��������" << ' ';
		break;
	case 4: cout << "������ ��������" << ' ';
		break;
	case 5: cout << "���� ���������" << ' ';
		break;
	case 6: cout << "����� ���������" << ' ';
		break;
	case 7: cout << "���� ���������" << ' ';
		break;
	case 8: cout << "������ ���������" << ' ';
		break;
	case 9: cout << "������ ���������" << ' ';
		break;
	default: break;
	}

	switch ((a / (100000 / mil)) % 10)
	{
	case 1: cout << "���" << ' ';
		tis = 1;
		break;
	case 2: cout << "������" << ' ';
		tis = 1;
		break;
	case 3: cout << "������" << ' ';
		tis = 1;
		break;
	case 4: cout << "���������" << ' ';
		tis = 1;
		break;
	case 5: cout << "�������" << ' ';
		tis = 1;
		break;
	case 6: cout << "��������" << ' ';
		tis = 1;
		break;
	case 7: cout << "�������" << ' ';
		tis = 1;
		break;
	case 8: cout << "���������" << ' ';
		tis = 1;
		break;
	case 9: cout << "���������" << ' ';
		tis = 1;
		break;
	default: break;
	}

	switch ((a / (10000 / mil)) % 10)
	{
	case 1: des = 1;
		break;
	case 2: cout << "��������" << ' ';
		tis = 1;
		break;
	case 3: cout << "��������" << ' ';
		tis = 1;
		break;
	case 4: cout << "�����" << ' ';
		tis = 1;
		break;
	case 5: cout << "���������" << ' ';
		tis = 1;
		break;
	case 6: cout << "����������" << ' ';
		tis = 1;
		break;
	case 7: cout << "���������" << ' ';
		tis = 1;
		break;
	case 8: cout << "�����������" << ' ';
		tis = 1;
		break;
	case 9: cout << "���������" << ' ';
		tis = 1;
		break;
	default: break;
	}

	if (des == 1)
		switch ((a / (1000 / mil)) % 10)
		{
		case 0: cout << "������ �����";
			break;
		case 1: cout << "����������� �����" << ' ';
			break;
		case 2: cout << "���������� �����" << ' ';
			break;
		case 3: cout << "���������� �����" << ' ';
			break;
		case 4: cout << "������������ �����" << ' ';
			break;
		case 5: cout << "���������� �����" << ' ';
			break;
		case 6: cout << "����������� �����" << ' ';
			break;
		case 7: cout << "���������� �����" << ' ';
			break;
		case 8: cout << "������������ �����" << ' ';
			break;
		case 9: cout << "������������ �����" << ' ';
			break;
		default: if (tis == 1)
			cout << "�����";
			break;
		}
	else
		switch ((a / (1000 / mil)) % 10)
		{
		case 1: cout << "���� ������" << ' ';
			break;
		case 2: cout << "��� ������" << ' ';
			break;
		case 3: cout << "��� ������" << ' ';
			break;
		case 4: cout << "������ ������" << ' ';
			break;
		case 5: cout << "���� �����" << ' ';
			break;
		case 6: cout << "����� �����" << ' ';
			break;
		case 7: cout << "���� �����" << ' ';
			break;
		case 8: cout << "������ �����" << ' ';
			break;
		case 9: cout << "������ �����" << ' ';
			break;
		default:  if (tis == 1)
			cout << "�����";
			break;
		}

	switch ((a / (100 / mil)) % 10)
	{
	case 1: cout << "���" << ' ';
		break;
	case 2: cout << "������" << ' ';
		break;
	case 3: cout << "������" << ' ';
		break;
	case 4: cout << "���������" << ' ';
		break;
	case 5: cout << "�������" << ' ';
		break;
	case 6: cout << "��������" << ' ';
		break;
	case 7: cout << "�������" << ' ';
		break;
	case 8: cout << "���������" << ' ';
		break;
	case 9: cout << "���������" << ' ';
		break;
	default: break;
	}

	des = 0;

	switch ((a / (10 / mil)) % 10)
	{
	case 1: des = 1;
		break;
	case 2: cout << "��������" << ' ';
		break;
	case 3: cout << "��������" << ' ';
		break;
	case 4: cout << "�����" << ' ';
		break;
	case 5: cout << "���������" << ' ';
		break;
	case 6: cout << "����������" << ' ';
		break;
	case 7: cout << "���������" << ' ';
		break;
	case 8: cout << "�����������" << ' ';
		break;
	case 9: cout << "���������" << ' ';
		break;
	default: break;
	}

	if (des == 1)
		switch (a % 10)
		{
		case 0: cout << "������" << ' ';
			break;
		case 1: cout << "�����������" << ' ';
			break;
		case 2: cout << "����������" << ' ';
			break;
		case 3: cout << "����������" << ' ';
			break;
		case 4: cout << "������������" << ' ';
			break;
		case 5: cout << "����������" << ' ';
			break;
		case 6: cout << "�����������" << ' ';
			break;
		case 7: cout << "����������" << ' ';
			break;
		case 8: cout << "������������" << ' ';
			break;
		case 9: cout << "������������" << ' ';
			break;
		default: break;
		}
	else
		switch (a % 10)
		{
		case 1: cout << "����" << ' ';
			break;
		case 2: cout << "���" << ' ';
			break;
		case 3: cout << "���" << ' ';
			break;
		case 4: cout << "������" << ' ';
			break;
		case 5: cout << "����" << ' ';
			break;
		case 6: cout << "�����" << ' ';
			break;
		case 7: cout << "����" << ' ';
			break;
		case 8: cout << "������" << ' ';
			break;
		case 9: cout << "������" << ' ';
			break;
		default: break;
		}
	return 0;
}