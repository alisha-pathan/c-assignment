/*31.	Convert kilometers into meters
1 kilometer = 1000m right what we need is m,km

*/
#include <stdio.h>
void main()
{
	float m,km;
	printf("Enter kilometers to convert into meters:");
	scanf("%f",&km);
	
	printf("After convert %.2f km = %.2f meters",km,km*1000);
}
