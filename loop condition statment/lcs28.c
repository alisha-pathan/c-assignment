#include <stdio.h>
int main() {
    int n, i;
    int current = 1;
    printf("Enter number : ");
    scanf("%d", &n);
	printf("\n Series: %d",current);
	for (i=1;i<n;i++)
	{
        if (i%2!= 0) 
		{
			current*=2;
        } 
		else{
            current*=1.5;
        }
        printf("\t %d ",current);
    }
	  printf("\n");
    return 0;
}

