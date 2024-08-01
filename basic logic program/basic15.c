//15. convert school name in abbreviate form: 
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0;
	char a[100],s[100];
	printf("Enter school name : ");
	gets(s);
	
	
	for(i=0; s[i] != '\0'; i++ )
	{
		if((i==0 || s[i-1] == ' ') && s[i] !=' ')
		{
			a[j]= s[i];
			j++;
		}
	}
	
	printf("The %s country abbreviation form is %s",s,strupr(a));
	return 0;
}
