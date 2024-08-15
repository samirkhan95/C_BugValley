#include<stdio.h>
int main (){

    int a;
    printf("\nEnter any odd number: ");
    scanf("%d",&a);
    printf("\n");

if( a%2!=0){ // to check if it's odd or even

    for(int i = 1; i <= a; i++){ // for row
        for(int j = 1; j <= a; j++){ // for column
        
            if(i == a/2+1 || j == a/2+1){ // for checking the middle & center line
                printf("*");
            }
            else{
                printf(" "); // empty space
            }
        }
        printf("\n"); // next line
    }
}

else{
    printf("Please enter an odd number");
}

    printf("\n"); // beautification
    return 0;
}