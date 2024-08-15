#include<stdio.h>
int main (){

    int a; 
    printf("\nEnter your number: ");
    scanf("%d", &a);
    printf("\n");

    for(int i=1; i<=a; i++){ 
        for(int j=i; j<=a; j++){
            printf(" ");
        }
        int b=1;
        for(int k=1; k<=i; k++){
            printf("%d", b);
            b++;
        }
        int p = i-1;
        for(int l=1; l<i; l++){
            printf("%d", p);
            p--;
        }
        printf("\n");
    }

    return 0;
}