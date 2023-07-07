#include "main.h"
#include <math.h>

/**
 * _pow_recursion - prints value raised to a power
 * @x: Base value
 * @y: Power value
 * Return: Awlays 0 (success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
