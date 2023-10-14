module;
#include <math.h>
export module student3:f1;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant25
		{
			namespace Task4
			{
				export double f1(double x)
				{
					double res;
					res = sqrt((x + 3) / (x - 3));
					return res;
				}
			}
		}
	}
}
