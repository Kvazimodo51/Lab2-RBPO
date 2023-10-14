module;
#include <math.h>
export module student3:f4;
import :a;
namespace RBPO
{
	namespace Lab2
	{
		namespace Variant25
		{
			namespace Task4
			{
				export double f4(double accuracy)
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
			}
		}
	}
}
