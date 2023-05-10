#include "math.h"


math::math(int a, int b):a(a), b(b)
{
}


int math::add()
{
	return a + b;
}


int math::max()
{
	return a > b ? a : b;
}


int math::min()
{
	return a > b ? b : a;
}

