/*
*@file Code.cpp
*@author Топильскый А. С, гр. 515б
*@date 23.06.2021
*@brief Практика
*
*Вариант задания №15
*/
#include <stdio.h>
#include <locale.h>

int result(int a, int b, int c, int k, float* x, float* y, float* z);
int main() {
	
	float a, b, c, k, x, y, z;

	setlocale(LC_ALL, "Rus");

	printf("Уравнение плоскости имеет следующий вид ax + by + cz + k = 0\n");
	printf("Где a, b и c - коэффициенты возле переменных, а k - свободный  коэффициент\n\n");

	printf("Введите коэффициенты плоскости(a, b, c, k - через пробел): ");
	scanf_s("%f %f %f %f", &a, &b, &c, &k);
	printf("Введите координаты точки(через пробел): ");
	scanf_s("%f %f %f", &x, &y, &z);

	result(a, b, c, k, &x, &y, &z);

	printf("Проекция точки на плоскость имеет такие координаты - (%.2f,  %.2f,  %.2f)\n", x, y, z);
}

int result(int a, int b, int c, int k, float* x, float* y, float* z) {

	float t;

	t = (-a * *x - b * *y - c * *z - k) / (a * a + b * b + c * c);

	*x = a * t + *x;
	*y = b * t + *y;
	*z = c * t + *z;

	return t;
}

