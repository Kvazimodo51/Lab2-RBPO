#include <math.h>
module student2;

double RBPO::Lab2::Variant25::Task3::f4(double accuracy)
{
	double previous = 0;
	double now = a(0);
	double sum = previous + now;
	int i = 1;
	do
	{
		previous = now;
		now = a(i);
		sum += now;
		i++;
	} while (fabs(now - previous) > accuracy);
	return sum;
}