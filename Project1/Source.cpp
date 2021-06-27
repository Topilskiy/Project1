/*
*@file Code.cpp
*@author ���������� �. �, ��. 515�
*@date 23.06.2021
*@brief ��������
*
*������� ������� �15
*/
#include <stdio.h>
#include <locale.h>

int result(int a, int b, int c, int k, float* x, float* y, float* z);
int main() {
	
	float a, b, c, k, x, y, z;

	setlocale(LC_ALL, "Rus");

	printf("��������� ��������� ����� ��������� ��� ax + by + cz + k = 0\n");
	printf("��� a, b � c - ������������ ����� ����������, � k - ���������  �����������\n\n");

	printf("������� ������������ ���������(a, b, c, k - ����� ������): ");
	scanf_s("%f %f %f %f", &a, &b, &c, &k);
	printf("������� ���������� �����(����� ������): ");
	scanf_s("%f %f %f", &x, &y, &z);

	result(a, b, c, k, &x, &y, &z);

	printf("�������� ����� �� ��������� ����� ����� ���������� - (%.2f,  %.2f,  %.2f)\n", x, y, z);
}

int result(int a, int b, int c, int k, float* x, float* y, float* z) {

	float t;

	t = (-a * *x - b * *y - c * *z - k) / (a * a + b * b + c * c);

	*x = a * t + *x;
	*y = b * t + *y;
	*z = c * t + *z;

	return t;
}

