//2.	Write a program in C to separate individual characters from a string.
#include<stdio.h>
int main()
{
	char str[100],st[100];
	int i;
	printf("Enter any string:");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]!= ' ')
		{
			printf("\n Individual characters from a string = %c",str[i]);
		}
		
	}
	return 0;
}
