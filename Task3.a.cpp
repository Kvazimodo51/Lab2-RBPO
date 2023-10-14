#include <math.h>
module student2;

double RBPO::Lab2::Variant25::Task3::a(int i)
{
	double res;
	res = pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)));
	return res;
}