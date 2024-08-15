#include<stdio.h>
int main (){

    int r; 
    printf("\nEnter your number please: ");
    scanf("%d",&r);
    printf("\n");

    for(int i=1; i<=r; i++){ //Number of Rows --> i
        for(int j=1; j<=r; j++) //Number of Columns --> j
            printf("%d ",j);
    
    printf("\n"); //So that next row can't mix with past row
    }
    printf("\n"); //For beautification
    return 0;
}               