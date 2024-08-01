/*2.	WAP to accept 5 numbers from user and display all numbers*/
#include<stdio.h>

int main() {
    int i, num;
    
    printf("Enter any 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        printf("You enter: %d\n", num);
    }
    
    return 0;
}
