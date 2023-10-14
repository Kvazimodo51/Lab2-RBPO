module;
#include <math.h>
export module student0;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant25
		{
			namespace Task1
			{
				export double f1(double x)
				{
					double res;
					res = sqrt((x + 3) / (x - 3));
					return res;
				}
				export double f2(double x)
				{
					double res;
					x > 3 ? res = -3 * x + 9 : res = (x * x * x) / (x * x + 8);
					return res;
				}
				export double a(int i)
				{
					double res;
					res = pow(-1, i) * ((i+1)/(pow(3,i)+pow(2,i)));
					return res;
				}
				export double f3(int n)
				{
					double sum = 0;
					for (int i = 0; i <= n; i++)
					{
						sum += a(i);
					}
					return sum;
				}
				export double f4(double accuracy)
				{
					double previous = a(0);
					double now;
					double sum = previous;
					for (int i = 1; ;i++)
					{
						now = a(i);
						sum += now;
						if (fabs(now - previous) <= accuracy)
						{
							return sum;
						}
						previous = now;
					}
				}
			}
		}
	}
}