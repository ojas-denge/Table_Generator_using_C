//Print the table of a number input by the user.
#include<stdio.h>
int main () {
    int n, i;
    
    printf("Input a Value: \n");
    scanf("%d", &n);
    
    for(i=0; i<=20; i++) {
        printf("%d x %d = %d \n", n, i, n*i);
    }
    return 0;
}