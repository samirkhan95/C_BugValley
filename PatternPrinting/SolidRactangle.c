#include<stdio.h>
int main (){

    int r; //row
    printf("\nEnter number of rows: ");
    scanf("%d",&r);

    int c; //column
    printf("Enter number of column: ");
    scanf("%d",&c);
    printf("\n");

    for(int i=1; i<=r; i++){ //Number of Rows --> i
        for(int j=1; j<=c; j++){ // Number of Columns --> j
            printf("*");
        }
    printf("\n"); //So that next row can't mixed with past row
    }

    printf("\n");
    return 0;
} 