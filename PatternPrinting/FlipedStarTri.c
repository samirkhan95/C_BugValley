#include<stdio.h>
int main (){

    int a;
    printf("\nEnter your number: ");
    scanf("%d", &a);
    printf("\n");

    for(int i=1; i<=a; i++){ // for rows
        for(int j=1; j<=a-i; j++){ // for empty spaces
        printf( " " ) ;
        }
        for(int k=1; k<=i; k++){ // for * 
        printf("*");
        }
        printf("\n"); 
    }
    
    printf("\n");
    return 0;
}


