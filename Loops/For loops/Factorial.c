#include<stdio.h>
int main (){

    int s;
    printf("Enter you number: ");
    scanf("%d",&s);

    int product = 1; 
    for(int i=1; i<=s; i++){
        product = product*i;
    }
    printf("Factorial is %d ", product);
    return 0;
}