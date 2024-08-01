//1.	Write a program in C to find the length of a string without using library functions
#include<stdio.h>
int length(char str[]);
int main()
{
	int len;
	char str[100];
	printf("Enter string to find its length:");
	gets(str);
	len = length(str);
	printf("The length of string = %d", len);
	return 0;
}
int length(char str[])
{
	int length,i;
	for(i=0; str[i]!='\0'; i++)
	{
		length++;
	}
	return length;
}
