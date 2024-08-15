#include<stdio.h>
int main (){

    int a;
    printf("\nEnter your number: ");
    scanf("%d", &a);
    printf("\n");

    for(int i=1; i<=a; i++){ //for rows
        for(int j=i; j<=a; j++){ //for spaces
            printf(" ");
        }
        for(int k=1; k<=2*i-1; k++){ // 2*i-1 is for the star that increses by lines
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}