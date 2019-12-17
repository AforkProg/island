#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int b = 'x';
	char field[100][100];
	for (int a = 0; a < 100; a++)
	{
		for (int i = 0; i < 100; i++)
		{
			field[a][i] = '.';
		}
	}
	char c = 'X';
	int str = rand() % 99;
	int sto = rand() % 99;
	field[str][sto] = c;

	int sz = rand() % 100 + 100;
	for (int sf = 0; sf < sz; sf++)
	{
		int sw = rand() % 8;
		cout << str << " " << sto << endl;
		if (sw == 1)
		{
			str = str;
			sto = sto + 1;
			if (str < 0 || sto < 0 || sto >= 99 || str >= 99)
			{
				continue;
			}
			field[str][sto] = c;

		}
		else if (sw == 2)
		{
			str = str;
			sto = sto - 1;
			if (str < 0 || sto < 0 || sto >= 99 || str >= 99)
			{
				continue;
			}
			field[str][sto] = c;

		}
		else if (sw == 3)
		{
			str = str + 1;
			sto = sto;
			if (str < 0 || sto < 0 || sto >= 99 || str >= 99)
			{
				continue;
			}
			field[str][sto] = c;

		}
		else if (sw == 4)
		{
			str = str - 1;
			sto = sto;
			if (str < 0 || sto < 0 || sto >= 99 || str >= 99)
			{
				continue;
			}
			field[str][sto] = c;
		}
		else if (sw == 5)
		{
			str = str + 1;
			sto = sto + 1;
			if (str < 0 || sto < 0 || sto >= 99 || str >= 99)
			{
				continue;
			}
			field[str][sto] = c;

		}
		else if (sw == 6)
		{
			str = str + 1;
			sto = sto - 1;
			if (str < 0 || sto < 0 || sto >= 99 || str >= 99)
			{
				continue;
			}
			field[str][sto] = c;
		}
		else if (sw == 7)
		{
			str = str - 1;
			sto = sto + 1;
			if (str < 0 || sto < 0 || sto >= 99 || str >= 99)
			{
				continue;
			}
			field[str][sto] = c;
		}
		else if (sw == 8)
		{
			str = str - 1 ;
			sto = sto - 1;
			if (str < 0 || sto < 0 || sto >= 99 || str >= 99)
			{
				continue;
			}
			field[str][sto] = c;
		}
	}

	for (int a = 0; a < 100; a++)
	{
		cout << endl;
		for (int i = 0; i < 100; i++)
		{
			cout << field[a][i];
		}
	}
	cout << endl;
	system("pause");
	return 0;
}