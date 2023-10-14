module;
#include <math.h>
export module student3:f2;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant25
		{
			namespace Task4
			{
				export double f2(double x)
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
			}
		}
	}
}
