/*16.	Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below:
Temp < 0 then Freezing weather Temp 
0-10 then Very Cold weather Temp 
10-20 then Cold weather Temp 
20-30 then Normal in Temp 
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/
#include<stdio.h>
int main(){
		int temp;
		printf("Enter the temperature :");
		scanf("%d",&temp);
		if(temp<0)
		{
			printf("%d Freezing weather  ",temp);
		}
		else if(temp>=0 && temp<=10)
		{
			printf("%d very cold weather ",temp);
		}
		else if(temp>=11 && temp<=20)
		{
			printf("%d cold weather ",temp);
		}
		else if(temp>=21 && temp<=30)
		{
			printf("%d Hot weather ",temp);
		}
		else if(temp>=40 )
		{
			printf("%d Very hot weather",temp);
		}
		else{
			printf("Error");
		}
}
