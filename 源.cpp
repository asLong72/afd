#include <stdio.h>
#include <math.h>

int a, b, c, d, e;
long l;
char ch;
double z, y, x, w;
int T1(void)
{
	scanf_s("%d%d%d", &a, &b, &c);
	if (a <= b && a <= c)
	{
		printf("%d\n", a);
	}
	else if (b <= a && b <= c)
	{
		printf("%d\n", b);
	}
	else
	{
		printf("%d\n", c);
	}
	return 0;
}
int T2(void)
{
	int a;
	scanf_s("%d", &a);
	if (a < 0 || a>100)
	{
		printf("error!");
	}
	else
	{
		a /= 10;
		switch (a)
		{
		case 10:
			putchar('A');
			break;
		case 9:
			putchar('A');
			break;
		case 8:
			putchar('B');
			break;
		case 7:
			putchar('C');
			break;
		case 6:
			putchar('D');
			break;
		default:
			putchar('E');
			break;
		}
	}
	return 0;
}
int T3(void)
{
	scanf_s("%d", &a);

	if (a < 0)
	{
		printf("error!");
	}
	if (0 != (a % 10))
	{
		printf("%d", a % 10);
	}
	if (0 != (a % 100))
	{
		printf("%d", (a % 100) / 10);
	}
	if (0 != (a % 1000))
	{
		printf("%d", (a % 1000) / 100);
	}
	return 0;
}
int T4(void)
{
	scanf_s("%d", &a);
	if (100000 >= a)
	{
		z = a * 0.1;
	}
	if (100000 >= a - 100000 && a - 100000 > 0)
	{
		a = a - 100000;
		z = (100000 * 0.1) + (a * 0.075);
	}
	if (200000 >= a - 200000 && a - 200000 > 0)
	{
		a = a - 200000;
		z = (100000 * 0.1) + (1000000 * 0.075) + (a * 0.05);
	}
	if (200000 >= a - 400000 && a - 400000 > 0)
	{
		a = a - 400000;
		z = (100000 * 0.1) + 1000000 * 0.075 + 200000 * 0.05 + a * 0.03;
	}
	if (400000 >= a - 600000 && a - 600000 > 0)
	{
		a = a - 600000;
		z = (100000 * 0.1) + 1000000 * 0.075 + 200000 * 0.05 + 20000 * 0.03 + a * 0.015;
	}
	if (a > 1000000)
	{
		l = a - 1000000;
		z = (100000 * 0.1) + 1000000 * 0.075 + 200000 * 0.05 + 20000 * 0.03 + 400000 * 0.015 + (l - 1000000) * 0.01;
	}
	printf("%.2f", z);

	return 0;
}
int T5(void)
{
	scanf_s("&lf", &x);
	if (x < 1)
	{
		y = x * x + 2 * x + sin(x);
	}
	else if (x >= 1 && x <= 10)
	{
		y = 2 * x + 1;
	}
	else if (x > 10)
	{
		y = sqrt(x * x * x * 2 + 11);
	}
	printf("%.2f", y);
	return 0;
}
int T6(void)
{
	scanf_s("%c", &ch);
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
	{
		printf("It is an alphabetic character.");
	}
	else if (ch >= 48 && ch <= 89)
	{
		printf("It is a digit.");
	}
	else
	{
		printf("£ºIt is other character.");
	}
	return 0;
}
int T7(void)
{
start:
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b > c&& a + c > b&& c + b > a)
	{
		if (a == b && a == c)
		{
			printf("1\n");
		}
		else if ((a == b && a != c) || (a == c && a != b) || (c == b && c != a))
		{
			printf("2\n");
		}
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a))
		{
			printf("3\n");
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("error!\n");
	}
	goto start;
	return 0;
}
int T8(void)
{
	scanf_s("%lf", &z);
	if (a >= 0 && a <= 100)
	{
		printf("%d", (int)pow(z, 2.0));
	}
	else
	{
		printf("-1");
	}
	return 0;
}
int T9(void)
{
	scanf_s("%lf", &z);
	if (a >= 0 && a <= 20)
	{
		printf("%d", (int)pow(z, 3.0));
	}
	else
	{
		printf("-1");
	}
	return 0;
}
int T10(void)
{
	scanf_s("%d", &a);
	if (0 == (a % 4))
	{
		if (0 == (a % 400))
			printf("1\n");
		else if ((0 == a % 4) && (0 != a % 100))
			printf("1\n");
		else if ((0 != a % 400) == (0 == a % 100))
			printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
}
int T11(void)
{
	scanf_s("%d", &a);
	if (a >= 1 && a <= 12)
	{
		if (a == 2)
		{
			printf("28\n");
		}
		else if (a <= 7 && (a % 2) == 1)
		{
			printf("31\n");
		}
		else if (a <= 7 && (a % 2) == 0)
		{
			printf("30\n");
		}
		else if (a >= 8 && (a % 2) == 0)
		{
			printf("31\n");
		}
		else if (a >= 8 && (a % 2) == 1)
		{
			printf("30\n");
		}
	}
	else
	{
		printf("error!\n");
	}
	return 0;
}
int T12(void)
{
	float a, b, c;
	scanf_s("%f%f%f",&a,&b,&c);
	if (a!=0)
	{

	}
	return 0;
}
int T13(void)
{

	return 0;
}
int T14(void)
{

	return 0;
}
int T15(void)
{

	return 0;
}
int T16(void)
{

	return 0;
}
int T17(void)
{

	return 0;
}
int T18(void)
{

	return 0;
}
int T19(void)
{

	return 0;
}
int T20(void)
{

	return 0;
}
int main()
{
start:
	//T1();
	//T2();
	//T3();
	//T4();
	//T5();
	//T6();
	//T7();
	//T8();
	//T9();
	//T10();
	T11();
	T12();
	goto start;
	return 0;
}