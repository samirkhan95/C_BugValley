#include<stdio.h>
int main (){

    int s; 
    printf("\nEnter your number please: ");
    scanf("%d",&s);
    printf("\n");
    
    int k=1;
    for(int i=1; i<=s; i++){ //rows
        for(int j=1; j<=i; j++){ //columns
            printf("%d ",k);
            k = k+2;
        }
        printf("\n"); //So that next row can't mix with past row
    }
    printf("\n"); //For beautification
    return 0;
}