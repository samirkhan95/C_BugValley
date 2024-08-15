#include<stdio.h>
int main (){

    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    printf("\n");

    for(int i=1; i<=a; i++){ 
        for(int j=i; j<=a; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}


