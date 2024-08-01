//3.	Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
int main()
{
	char str[100],st[100];
	int i;
	printf("Enter any string:");
	gets(str);
	printf("\n Original String: %s",str);
	strrev(str);
	printf("\n Reverse String: %s",str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]!= ' ')
		{
			printf("\n Individual characters = %c",str[i]);
		}
		
	}
	return 0;
}
