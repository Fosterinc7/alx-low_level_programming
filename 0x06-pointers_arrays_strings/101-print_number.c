#include "main.h"
/**
 * print_number - prints an integer
 * @n:integer to be printed
 *
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (n == 0)
		_putchar('0');

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

int main(int argc, char** argv)
{
	int n = atoi(argv[1]);
	printnumber(n);
	return("\n");
}
