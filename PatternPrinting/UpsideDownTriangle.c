#include<stdio.h>
int main(){

    int p;
    printf("\nEnter your number of triangle: ");
    scanf("%d",&p);
    printf("\n");

    for(int i=1; i<=p; i++){ // for row
        for(int j=i; j<=p; j++) // for column
            printf("*");

    printf("\n"); // For not mixing
    }

    printf("\n");
    return 0;
} 