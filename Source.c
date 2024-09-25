#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define t 0.43
//void task1();
void task2();

void main()
{
	setlocale(LC_CTYPE, "RUS");
	//task1();
	task2();
}
void task1()
{
	float res1, sin1;
	int gr1;
	puts("Введите значение для градусов :");
	scanf("%d", &gr1);
	res1 = (M_PI * gr1) / 180;
	sin1 = sin(res1);
	printf("%d градусов = %f радиан", gr1, sin1);
}
void task2()
{
	float x;
	double y, a, b;

	puts("Введите значение x:");
	scanf("%f", &x);

	b = x * ((t*t*t) + x);
	a = exp(2 * x) + sqrt(t);
	y = pow(log10(fabs(x)), 3) + b;

	printf("При значении x = %f\n значение функции b = %lf\n значение функции a = %lf\n Финальное значение y = %lf", x, b, a, y);
}