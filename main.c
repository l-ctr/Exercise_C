#include <stdio.h>

int main()
{
	 //Far to Cel for fahr = 0, 20, ..,300

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf(" Fahrenheit to Celsius \n\n");
	while (fahr <= upper) {
		celsius = 5.0/9.0 * (fahr-32);
		printf("%3.3f %3.3f\n" , fahr , celsius);
		fahr = fahr + step;

	}




}

