/*
26.	Convert temperature Fahrenheit to Celsius
°C = (°F - 32) × 5/9.*/
#include <stdio.h>
void main()
{
	float c,f,ans;
	printf("Enter temperature fahrenheit to convert:");
	scanf("%f",&f);
	c = (f - 32) * (5.0 / 9);
	printf("ans = %.2f",c);
}
