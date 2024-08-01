//6.	Write a program in C to count the total number of alphabets, digits and special 
//characters in a string.

// 65=A 90=Z 97=a 122=z
#include<stdio.h>
int main()
{
	char str[100];
	int count=0,digit=0,schar=0,i;
	
	printf("Enter string to count the total number of alphabets, digits and special characters:");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			count++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
		}
		else{
			schar++;
		}
	
	}
	printf("\nalphabet = %d",count);
	printf("\ndigit = %d",digit);
	printf("\nspecial character = %d",schar);
	
	return 0;
}
