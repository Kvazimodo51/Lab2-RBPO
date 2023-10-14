module;
#include <math.h>
export module student3:a;
namespace RBPO
{
	namespace Lab2
	{
		namespace Variant25
		{
			namespace Task4
			{
				double a(int i)
				{
					double res;
					res = pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)));
					return res;
				}
			}
		}
	}
}
