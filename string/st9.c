//9.	Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
int main()
{
	char str[100],c,mchar;
	int count,i,max=0;
	printf("\n Enter string : ");
	gets(str);
	strlwr(str);
	for(c='a'; c<='z'; c++)
	{
		count = 0;
		for(i=0; str[i] != '\0'; i++)
		{
			if(c == str[i])
			{
				count++;
			}
		}
	
		if (count > max)
        {
            max = count;
            mchar = c;
        }
	}
	if (max > 0)
    {
        printf("\n\nmaximum character is :  %c = %d times\n", mchar, max);
    }
	return 0;
}
