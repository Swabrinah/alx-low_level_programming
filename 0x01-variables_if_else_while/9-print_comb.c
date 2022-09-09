#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/**
 * main - The main function is the entry point
 *
 * The programs prints combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */



int main(void)

{

	int d;


	for (d = '0'; d <= '9'; d++)

	{

	  putchar(d);

	if (d != '9')

		{

	putchar(',');

	putchar(' ');

		}

	}

	putchar('\n');



	return (0);

}

Footer

© 2022 Git
