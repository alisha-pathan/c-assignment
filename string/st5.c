//7.	Write a program in C to copy one string to another string.
#include<Stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10]; int i , result = 0;
	printf("Enter first string:");
	gets(str1);
	printf("\nEnter second string:");
	gets(str2);
	
	for(i=0; str1[i] != '\0'; i++)
	{
		if(str1[i] != str2[i])
		{
			result = 1;
		}
	}
	if(result != 1)
	{
		printf("\nIt is Equal");
	}
	else
	{
		printf("\nIt is not Equal");
	}
	return 0;
}
