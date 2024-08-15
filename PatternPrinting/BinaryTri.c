#include<stdio.h>
int main (){

    int a;
    printf("\nEnter your number: ");
    scanf("%d", &a);
    printf("\n");

    int b = 1;
    for(int i = 1; i <= a; i++){

        if(b%2!=0) b = 1;
        else b=0;

            for(int j = 1; j <=i; j++){
                printf("%d ", b);

                if (b==0) b=1;
                else b=0;

        }
        printf("\n"); 
    }
    return 0;
}