#include<stdio.h>
int add(int x, int y){
return x+y;
}

int main(){

    int a, b;
    printf("\nEnter 1st number: ");
    scanf("%d",&a);

    printf("Enter 2nd number: ");
    scanf("%d",&b);

    int sum = add(a,b);
    printf("\nThe sum is: %d", sum);

    return 0;
}