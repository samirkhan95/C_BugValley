#include<stdio.h>
int main (){

int n;
printf("\nPlease enter any digit number: ");
scanf("%d",&n);
printf("\n");

    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("This is a %d digit number", count);

    return 0;
}