/*19.	Patterns:
A
A B
A B C
A B C D
A B C D E
*/
#include <stdio.h>
int main() {
    int i,j,n;
    char ch;
	printf("Enter the number of rows: ");
    scanf("%d", &n);
	for (i=0;i<n;i++) {
        ch='A';  
        for (j=0;j<=i;j++) {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}

