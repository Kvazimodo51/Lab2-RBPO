#include <math.h>

import student1;
double RBPO::Lab2::Variant25::Task2::f1(double x)
{
	double res;
	res = sqrt((x + 3) / (x - 3));
	return res;
}
double RBPO::Lab2::Variant25::Task2::f2(double x)
{
	double res;
	if (x > 3)
	{
		res = -3 * x + 9;
	}
	else
	{
		res = (x * x * x) / (x * x + 8);
	}
	return res;
}
double a(int i)
{
	double res;
	res = pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)));
	return res;
}
double RBPO::Lab2::Variant25::Task2::f3(int n)
{
	double sum = 0;
	int i = 0;
	while (i <= n)
	{
		sum += a(i);
		i++;
	}
	return sum;
}
double RBPO::Lab2::Variant25::Task2::f4(double accuracy)
{
	double previous = 0;
	double now = a(0);
	double sum = previous + now;
	int i = 1;
	while (fabs(now - previous) >= accuracy)
	{
		previous = now;
		now = a(i);
		sum += now;
		i++;
	}
	return sum;
}