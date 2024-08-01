//16.Convert country's name in abbreviate form
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0;
	char a[100],c[100];
	printf("Enter country name : ");
	gets(c);
	
	
	for(i=0; c[i] != '\0'; i++ )
	{
		if((i==0 || c[i-1] == ' ') && c[i] !=' ')
		{
			a[j]= c[i];
			j++;
		}
	}
	
	printf("The %s country abbreviation form is %s",c,strupr(a));
	return 0;
}
