/*
37.	WAP to show
i.	Monday to Sunday using switch case
ii.	Vowel or Consonant using switch case
*/
#include<stdio.h>
int main(){
	int day,option;char alpha;
	start:
	printf("\nfor alphabet select 1 and for days select 2:");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			printf("\n You Select Day");
			printf("\nEnter a number to find the weekday:");
			scanf("%d",&day);
			switch(day)
				{
					case 1:
						printf("\nIt is Sunday");
						break;
					case 2:
						printf("\nIt is Monday");
						break;
					case 3:
						printf("\nIt is Tuesday");
						break;
					case 4:
						printf("\nIt is Wednesday");
						break;
					case 5:
						printf("\nIt is Thurday");
						break;
					case 6:
						printf("\nIt is Friday");
						break;
					case 7:
						printf("\nIt is Saturday");
						break;
					default:
						printf("\nEnter number between 7");
				}break;
		case 2:
				printf("\nYou Select alphabets:");
				printf("\nEnter Any alphabet to find its vowel or consonent:");
				scanf(" %c",&alpha);
				switch(alpha)
				{
					case 'a':case 'e':case 'i':case 'o':case 'u':
					case 'A':case 'E':case 'I':case 'O':case 'U':
						printf("\nalphabet %c is vowel",alpha);
						break;
					default:
						printf("\nIt is consonent");
				}

	}
	
	
	char ans;
	printf("\nDo you want to continue:");
	scanf(" %c",&ans);
	if(ans=='y' || ans=='Y')
	{
		goto start;
	}
	printf("THANK YOU FOR VISITING");
	return 0;
}
