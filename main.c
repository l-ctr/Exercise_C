#include <stdio.h>

int main()
{
	/* //Far to Cel for fahr = 0, 20, ..,300

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf(" Fahrenheit to Celsius \n\n");
	while (fahr <= upper)
	{ celsius = 5.0/9.0 * (fahr-32);
	  printf("%3.3f %3.3f\n" , fahr , celsius);
	  fahr = fahr + step;

	} */

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 200;
	step = 30;

	celsius = lower;
	printf(" Celsius to Fahrenheit \n\n");

	while (celsius <= upper)
	{
		fahr = 32 + 9.0/5.0 * celsius;
		printf("%3.3f \t %3.3f\n" , celsius , fahr);
		celsius = celsius + step;

	}
}

