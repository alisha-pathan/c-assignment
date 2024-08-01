//4.	Write a program in C to count the total number of words in a string.
#include<stdio.h>
int main()
{
	char str[100];
	int i,words;
	printf("Enter string: ");
	gets(str);
	for(i=0; str[i]!=0; i++)
	{
		if(str[i]= 0 || str[i-1]!=' ' && str[i]==' ')
		{
			words++;
		}
	}

	printf("\n Total words in string = %d",words);
	return 0;
}
