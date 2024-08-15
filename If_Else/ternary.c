#include<stdio.h>
int main(){

    int s;
    printf("Enter your number: ");
    scanf("%d",&s);

//ternary operator
// expression1 ? expression 2 : expression 3 ;

    s%2==0 ? printf("Even") : printf("Odd");
    return 0;
    
}