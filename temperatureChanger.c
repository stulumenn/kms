#include<stdio.h>
#include<math.h>


int main(){
	// command line
	double temperature;
	float a;
	int b;
	char c;
	double tmp1, kelvin, fahrenheit;

	printf ("Please enter the tempreture that you would like to convert to kelvin and fahrenheit.\n");
	scanf ("%lf", &tmp1);

	kelvin = tmp1 + 273;
	fahrenheit = (tmp1 * 9) / 5 + 32;

	printf ("The temperature that you've written equals to %.0f kelvin, %f fahrenheit.\n", kelvin, fahrenheit);

	return 0;
}