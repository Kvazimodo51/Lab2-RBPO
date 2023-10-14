module;
#include <math.h>
export module student3:f3;
import :a;
namespace RBPO
{
	namespace Lab2
	{
		namespace Variant25
		{
			namespace Task4
			{
				export double f3(int n)
				{
					double sum = 0;
					int i = 0;
					do
					{
						sum += a(i);
						i++;
					} while (i <= n);
					return sum;
				}
			}
		}
	}
}
