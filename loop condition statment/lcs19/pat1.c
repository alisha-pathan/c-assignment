#include <stdio.h>
int main() {
    int i,j,n;
    char ch;int k=1;
	printf("Enter the number of rows: ");
    scanf("%d", &n);
	for (i=0;i<n;i++) {
          
        for (j=1;j<=i;j++) {
            printf(" %d ",j);
            k++;
        }
        printf("\n");
    }

    return 0;
}

