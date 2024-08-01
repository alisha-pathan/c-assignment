//7.	Write a program in C to copy one string to another string.
#include<Stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10],result;
	printf("Enter first string:");
	gets(str1);
	printf("\nEnter second string:");
	gets(str2);
	
	strcpy(str1,str2);
	printf("\n After copy string str1 : %s",str1);
	printf("\n After copy string str2 : %s",str2);

	return 0;
}
