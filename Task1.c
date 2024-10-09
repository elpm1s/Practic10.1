#include <stdio.h>
#include <locale.h>
#include <math.h>

double fa(double x) {

	double y;

	if (x <= 3) y = x * x - 3 * x + 9;
	else y = 1 / (x * x * x + 3);

	return y;

}
double fb(double x) {

	double y;

	y = x * exp(sin(x * x));

	return y;
}

void main()
{
	setlocale(LC_ALL, "RUS");
	double x;

	
	printf("Введите x: \n");
	scanf("%lf", &x);

	printf("fa(x)=%lf \nfb(x)=%lf \n", fa(x), fb(x));

	printf("Произведение функций: %lf\n", fa(x) * fb(x));
	printf("Разность квадратов функций: %lf\n", fa(x) * fa(x) - fb(x) * fb(x));
	printf("Удвоенная сумма функций: %lf\n", fa(x) * 2 + fb(x) * fb(x));
}