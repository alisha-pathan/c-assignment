/*9.	C Program to Check Uppercase or Lowercase or Digit or Special Character*/
#include <stdio.h>
void main()
{
	char ch;
	printf("Enter any character to find it is lower or capital case :");
	scanf("%c",&ch);
	
	if(ch >= 65 && ch <= 90)
	{
		printf("%c = Capital capse",ch);
	}
	else if(ch >= 97 && ch <= 122)
	{
		printf("%c = lower capse",ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf("%c is digit",ch);
	}
	else {
		printf("%c is special character",ch);
	}
}
