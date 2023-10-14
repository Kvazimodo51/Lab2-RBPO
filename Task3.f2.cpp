#include <math.h>
import student2;
double RBPO::Lab2::Variant25::Task3::f2(double x)
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