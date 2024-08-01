//22.	Accept 3 numbers from user using while loop and check each numbers palindrome
#include<stdio.h>
int main()
{
	int num,i=1,rem,reverse;
	while(i<=3)
	{
		reverse=0;
		printf("\nEnter num %d :",i);
		scanf("%d",&num);
		
		int copy=num;
		
		while(num!=0)
		{
			rem = num%10; 
			reverse = (reverse*10) + rem;
			num = num/10;
		}
		
		if(reverse == copy)
		{
			printf("\n%d is pallindrome number",copy);
		}
		else{
			printf("\n%d is not  pallindrome number",copy);
		}
		i++;
	}
}
