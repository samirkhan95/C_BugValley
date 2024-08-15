#include <stdio.h>
int main(){

    int a, b; // a > b

    printf("Enter your 1st number: ");
    scanf("%d", &a);

    printf("Enter your second number: ");
    scanf("%d", &b);

    int q = a / b;
    int r = a - b * q;
    printf("Your reminder is: %d", r);
    
    return 0;
}