#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, des = 0, mil = 1, tis = 0;
	cin >> a;
	if (a > 10000000)
	{
		cout << "ќшибка";
		return 0;
	}
	if (a == 0)
	{
		cout << "Ќоль";
		return 0;
	}
	switch (a / 10000000)
	{
	case 1: cout << "ƒес€ть миллионов" << ' ';
		mil = 10;
		break;
	default: break;
	}
	switch ((a / 1000000) % 10)
	{
	case 1: cout << "ќдин миллион" << ' ';
		break;
	case 2: cout << "ƒва миллиона" << ' ';
		break;
	case 3: cout << "“ри миллиона" << ' ';
		break;
	case 4: cout << "„етыре миллиона" << ' ';
		break;
	case 5: cout << "ѕ€ть миллионов" << ' ';
		break;
	case 6: cout << "Ўесть миллионов" << ' ';
		break;
	case 7: cout << "—емь миллионов" << ' ';
		break;
	case 8: cout << "¬осемь миллионов" << ' ';
		break;
	case 9: cout << "ƒев€ть миллионов" << ' ';
		break;
	default: break;
	}

	switch ((a / (100000 / mil)) % 10)
	{
	case 1: cout << "сто" << ' ';
		tis = 1;
		break;
	case 2: cout << "двести" << ' ';
		tis = 1;
		break;
	case 3: cout << "триста" << ' ';
		tis = 1;
		break;
	case 4: cout << "четыреста" << ' ';
		tis = 1;
		break;
	case 5: cout << "п€тьсот" << ' ';
		tis = 1;
		break;
	case 6: cout << "шестьсот" << ' ';
		tis = 1;
		break;
	case 7: cout << "семьсот" << ' ';
		tis = 1;
		break;
	case 8: cout << "восемьсот" << ' ';
		tis = 1;
		break;
	case 9: cout << "дев€тьсот" << ' ';
		tis = 1;
		break;
	default: break;
	}

	switch ((a / (10000 / mil)) % 10)
	{
	case 1: des = 1;
		break;
	case 2: cout << "двадцать" << ' ';
		tis = 1;
		break;
	case 3: cout << "тридцать" << ' ';
		tis = 1;
		break;
	case 4: cout << "сорок" << ' ';
		tis = 1;
		break;
	case 5: cout << "п€тьдес€т" << ' ';
		tis = 1;
		break;
	case 6: cout << "шестьдес€т" << ' ';
		tis = 1;
		break;
	case 7: cout << "семьдес€т" << ' ';
		tis = 1;
		break;
	case 8: cout << "восемьдес€т" << ' ';
		tis = 1;
		break;
	case 9: cout << "дев€носто" << ' ';
		tis = 1;
		break;
	default: break;
	}

	if (des == 1)
		switch ((a / (1000 / mil)) % 10)
		{
		case 0: cout << "ƒес€ть тыс€ч";
			break;
		case 1: cout << "одиннадцать тыс€ч" << ' ';
			break;
		case 2: cout << "двенадцать тыс€ч" << ' ';
			break;
		case 3: cout << "тринадцать тыс€ч" << ' ';
			break;
		case 4: cout << "четырнадцать тыс€ч" << ' ';
			break;
		case 5: cout << "п€тнадцать тыс€ч" << ' ';
			break;
		case 6: cout << "шестнадцать тыс€ч" << ' ';
			break;
		case 7: cout << "семнадцать тыс€ч" << ' ';
			break;
		case 8: cout << "восемнадцать тыс€ч" << ' ';
			break;
		case 9: cout << "дев€тнадцать тыс€ч" << ' ';
			break;
		default: if (tis == 1)
			cout << "тыс€ч";
			break;
		}
	else
		switch ((a / (1000 / mil)) % 10)
		{
		case 1: cout << "одна тыс€ча" << ' ';
			break;
		case 2: cout << "две тыс€чи" << ' ';
			break;
		case 3: cout << "три тыс€чи" << ' ';
			break;
		case 4: cout << "четыре тыс€чи" << ' ';
			break;
		case 5: cout << "п€ть тыс€ч" << ' ';
			break;
		case 6: cout << "шесть тыс€ч" << ' ';
			break;
		case 7: cout << "семь тыс€ч" << ' ';
			break;
		case 8: cout << "восемь тыс€ч" << ' ';
			break;
		case 9: cout << "дев€ть тыс€ч" << ' ';
			break;
		default:  if (tis == 1)
			cout << "тыс€ч";
			break;
		}

	switch ((a / (100 / mil)) % 10)
	{
	case 1: cout << "сто" << ' ';
		break;
	case 2: cout << "двести" << ' ';
		break;
	case 3: cout << "триста" << ' ';
		break;
	case 4: cout << "четыреста" << ' ';
		break;
	case 5: cout << "п€тьсот" << ' ';
		break;
	case 6: cout << "шестьсот" << ' ';
		break;
	case 7: cout << "семьсот" << ' ';
		break;
	case 8: cout << "восемьсот" << ' ';
		break;
	case 9: cout << "дев€тьсот" << ' ';
		break;
	default: break;
	}

	des = 0;

	switch ((a / (10 / mil)) % 10)
	{
	case 1: des = 1;
		break;
	case 2: cout << "двадцать" << ' ';
		break;
	case 3: cout << "тридцать" << ' ';
		break;
	case 4: cout << "сорок" << ' ';
		break;
	case 5: cout << "п€тьдес€т" << ' ';
		break;
	case 6: cout << "шестьдес€т" << ' ';
		break;
	case 7: cout << "семьдес€т" << ' ';
		break;
	case 8: cout << "восемьдес€т" << ' ';
		break;
	case 9: cout << "дев€носто" << ' ';
		break;
	default: break;
	}

	if (des == 1)
		switch (a % 10)
		{
		case 0: cout << "дес€ть" << ' ';
			break;
		case 1: cout << "одиннадцать" << ' ';
			break;
		case 2: cout << "двенадцать" << ' ';
			break;
		case 3: cout << "тринадцать" << ' ';
			break;
		case 4: cout << "четырнадцать" << ' ';
			break;
		case 5: cout << "п€тнадцать" << ' ';
			break;
		case 6: cout << "шестнадцать" << ' ';
			break;
		case 7: cout << "семнадцать" << ' ';
			break;
		case 8: cout << "восемнадцать" << ' ';
			break;
		case 9: cout << "дев€тнадцать" << ' ';
			break;
		default: break;
		}
	else
		switch (a % 10)
		{
		case 1: cout << "один" << ' ';
			break;
		case 2: cout << "два" << ' ';
			break;
		case 3: cout << "три" << ' ';
			break;
		case 4: cout << "четыре" << ' ';
			break;
		case 5: cout << "п€ть" << ' ';
			break;
		case 6: cout << "шесть" << ' ';
			break;
		case 7: cout << "семь" << ' ';
			break;
		case 8: cout << "восемь" << ' ';
			break;
		case 9: cout << "дев€ть" << ' ';
			break;
		default: break;
		}
	return 0;
}