#include <cmath>
float y(float a, float x)
{
	if (a <=x)
	{
		return (a + log(x + a));
	}
	else
		return sqrt(abs(sin(a * x)));

}
float t(float a, float x, float c)
{
	if (a > c)
	{
		return c / (a - x);
	}
	else if (a == c)
	{
		return (c / (a - x)) + ((a + x) / pow(c, 2));
	}
	else if (a < c)
	{
		return tan(a * x) + cos(2 * a * x);
	}
	return 0;
}