#include <iostream>
#include <locale.h>
#include <stdio.h>



//5 ���������� m*n/k, ��� k ���� ������� �� ����� x, y, z, � m � n ���� ������� � ������� �� ���� �����
void task5()
{
	double x, y, z, m, n, k;
	double total;
	printf("������� �������� ���� ����� �����\n");
	printf("������� x=");
	scanf_s("%d", &x);
	printf("������� y=");
	scanf_s("%d", &y);
	printf("������� z=");
	scanf_s("%d", &z);
	if ((x == y) || (y == z) || (z == x) || (x == z) || (z == y) || (y == x))
	{
		printf("������, �� ������ ���� ����� ���� �����!\n");
	}
	else if ((x < y) && (x < z) && (y < z))
	{
		k = x;
		m = y;
		n = z;
		total = m * n / k;
		printf("����� ����� = %d\n", total);
	}
	else if ((y < x) && (y < z) && (x < z))
	{
		k = y;
		m = x;
		n = z;
		total = m * n / k;
		printf("����� ����� = %d\n", total);
	}
	else if ((z < x) && (z < y) && (x < y))
	{
		k = z;
		m = x;
		n = y;
		total = m * n / k;
		printf("����� ����� = %d\n", total);
	}
	else if ((x < z) && (x < y) && (z < y))
	{
		k = x;
		m = z;
		n = y;
		total = m * n / k;
		printf("����� ����� = %d\n", total);
	}
	else if ((y < z) && (y < x) && (z < x))
	{
		k = y;
		m = z;
		n = x;
		total = m * n / k;
		printf("����� ����� = %d\n", total);
	}
	else if ((z < y) && (z < x) && (y < x))
	{
		k = z;
		m = y;
		n = x;
		total = m * n / k;
		printf("����� ����� = %d\n", total);
	}

}

//4 ���������� x/y, ���� x ������ y, ����� ���������� y/x
void task4()
{
	double x, y, r;
	printf("������� �=");
	scanf_s("%d", &x);
	printf("������� y=");
	scanf_s("%d", &y);

	if (x > y)
	{
		r = x / y;
		printf("��������� = %d\n", r);
	}
	else
	{
		r = y / x;
		printf("��������� = %d\n", r);
	}

}

//3 ���������� x-y, ���� x ������ y, ����� ���������� y-x
void task3()
{
	int x, y, r;
	printf("������� �=");
	scanf_s("%d", &x);
	printf("������� y=");
	scanf_s("%d", &y);

	if (x > y)
	{
		r = x - y;
		printf("��������� = %d\n", r);
	}
	else
	{
		r = y - x;
		printf("��������� = -%d\n", r);
	}

}
//2 ���������� 0, ���� �������� x � y ��� ����� ����, 12/x, ���� y ����� 0, 12/y, ���� x ����� 0, ����� 144/(x*y)
void task2()
{
	int x, y, r;
	printf("������� �=");
	scanf_s("%d", &x);
	printf("������� y=");
	scanf_s("%d", &y);

	if (y == 0)
	{
		r = 12 / x;
		printf("��������� = %d", r);
	}
	else if (x == 0)
	{
		r = 12 / y;
		printf("��������� = %d", r);
	}
	else if (x != 0 && y != 0)
	{
		r = 144 / (x * y);
		printf("��������� = %d", r);
	}

}

//1 ��������� ������� q � ������� r ��� �������, � �� d
void task1()
{
	int a, d, q, r;
	printf("������� ����� � = ");
	scanf_s("%d", &a);
	printf("������� ����� d = ");
	scanf_s("%d", &d);

	q = a / d;
	printf("��������� = %d\n", q);

	r = a % d;
	printf("������� = %d\n", r);
}






int main()
{
	setlocale(LC_ALL, "");
	int task = 0;
	int restart = 0;

	do
	{
		printf("-------------------------------------------------------------------------------\n");
		printf("������� ����� �������\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("1 - ��������� ������� q � ������� r ��� �������, � �� d\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("2 - ���������� 0, ���� �������� x � y ��� ����� ����\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("3 - ���������� x-y, ���� x ������ y, ����� ���������� y-x\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("4 - ����������� x/y, ���� x ������ y, ����� ���������� y/x\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("5 - ���������� m*n/k, ��� k ���� ������� �� ����� x, y, z,\n");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		case 4:
		{
			task4();
		}break;
		case 5:
		{
			task5();
		}break;
		}

		printf("-------------------------------------------------------------------------------\n");
		printf("������ ���������� 1/0\n");
		printf("-------------------------------------------------------------------------------\n");
		scanf_s("%d", &restart);
	} while (restart = 1);

}