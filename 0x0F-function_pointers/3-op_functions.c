#include "3-calc.h"
/**
 * op_add - returns sum
 * op_sub - returns difference
 * op_mul - returns product
 * op_div - returns result of division
 * op_mod - returns remainder of division
 * @a: parameter one
 * @b: parameter two
 */
int op_add(int a, int b)
{
	return a + b;
}

int op_sub(int a, int b)
{
	return a - b;
}

int op_mul(int a, int b)
{
	return a * b;
}

int op_div(int a, int b)
{
	return a / b;
}

int op_mod(int a, int b)
{
	return a % b;
}
