#include <iostream>
#include <locale.h>
#include <stdio.h>



//5 возвращает m*n/k, где k есть меньшее из чисел x, y, z, а m и n есть среднее и большее из этих чисел
void task5()
{
	double x, y, z, m, n, k;
	double total;
	printf("Введите неравные друг другу числа\n");
	printf("Введите x=");
	scanf_s("%d", &x);
	printf("Введите y=");
	scanf_s("%d", &y);
	printf("Введите z=");
	scanf_s("%d", &z);
	if ((x == y) || (y == z) || (z == x) || (x == z) || (z == y) || (y == x))
	{
		printf("Ошибка, Не должны быть равны друг другу!\n");
	}
	else if ((x < y) && (x < z) && (y < z))
	{
		k = x;
		m = y;
		n = z;
		total = m * n / k;
		printf("Ответ равен = %d\n", total);
	}
	else if ((y < x) && (y < z) && (x < z))
	{
		k = y;
		m = x;
		n = z;
		total = m * n / k;
		printf("Ответ равен = %d\n", total);
	}
	else if ((z < x) && (z < y) && (x < y))
	{
		k = z;
		m = x;
		n = y;
		total = m * n / k;
		printf("Ответ равен = %d\n", total);
	}
	else if ((x < z) && (x < y) && (z < y))
	{
		k = x;
		m = z;
		n = y;
		total = m * n / k;
		printf("Ответ равен = %d\n", total);
	}
	else if ((y < z) && (y < x) && (z < x))
	{
		k = y;
		m = z;
		n = x;
		total = m * n / k;
		printf("Ответ равен = %d\n", total);
	}
	else if ((z < y) && (z < x) && (y < x))
	{
		k = z;
		m = y;
		n = x;
		total = m * n / k;
		printf("Ответ равен = %d\n", total);
	}

}

//4 возвращает x/y, если x больше y, иначе возвращает y/x
void task4()
{
	double x, y, r;
	printf("Введите х=");
	scanf_s("%d", &x);
	printf("Введите y=");
	scanf_s("%d", &y);

	if (x > y)
	{
		r = x / y;
		printf("Результат = %d\n", r);
	}
	else
	{
		r = y / x;
		printf("Результат = %d\n", r);
	}

}

//3 возвращает x-y, если x больше y, иначе возвращает y-x
void task3()
{
	int x, y, r;
	printf("Введите х=");
	scanf_s("%d", &x);
	printf("Введите y=");
	scanf_s("%d", &y);

	if (x > y)
	{
		r = x - y;
		printf("Результат = %d\n", r);
	}
	else
	{
		r = y - x;
		printf("Результат = -%d\n", r);
	}

}
//2 возвращает 0, если значения x и y оба равны нулю, 12/x, если y равен 0, 12/y, если x равен 0, иначе 144/(x*y)
void task2()
{
	int x, y, r;
	printf("Введите х=");
	scanf_s("%d", &x);
	printf("Введите y=");
	scanf_s("%d", &y);

	if (y == 0)
	{
		r = 12 / x;
		printf("Результат = %d", r);
	}
	else if (x == 0)
	{
		r = 12 / y;
		printf("Результат = %d", r);
	}
	else if (x != 0 && y != 0)
	{
		r = 144 / (x * y);
		printf("Результат = %d", r);
	}

}

//1 Вычислить частное q и остаток r при делении, а на d
void task1()
{
	int a, d, q, r;
	printf("Введите число а = ");
	scanf_s("%d", &a);
	printf("Введите число d = ");
	scanf_s("%d", &d);

	q = a / d;
	printf("Результат = %d\n", q);

	r = a % d;
	printf("Остаток = %d\n", r);
}






int main()
{
	setlocale(LC_ALL, "");
	int task = 0;
	int restart = 0;

	do
	{
		printf("-------------------------------------------------------------------------------\n");
		printf("Введите номер задания\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("1 - Вычислить частное q и остаток r при делении, а на d\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("2 - возвращает 0, если значения x и y оба равны нулю\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("3 - возвращает x-y, если x больше y, иначе возвращает y-x\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("4 - Нвозвращает x/y, если x больше y, иначе возвращает y/x\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("5 - возвращает m*n/k, где k есть меньшее из чисел x, y, z,\n");
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
		printf("Хотите продолжить 1/0\n");
		printf("-------------------------------------------------------------------------------\n");
		scanf_s("%d", &restart);
	} while (restart = 1);

}