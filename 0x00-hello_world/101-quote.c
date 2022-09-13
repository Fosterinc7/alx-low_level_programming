#include <stdio.h>
#include <unistd.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 *this program prints "and that piece of art is useful\" - Dora Korpar,2015-10-19"
 * Return: return 1
 */

int main(void)

{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
