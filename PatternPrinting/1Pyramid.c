#include<stdio.h>
int main (){

    int a; 
    printf("\nEnter your number: ");
    scanf("%d", &a);
    printf("\n");

    for(int i=1; i<=a; i++){ //for rows
        for(int j=i; j<=a; j++){ // for upside down space triangle
            printf(" ");
        }
        int b = 1;
        for(int k=1; k<=i; k++){ //for normal pyramid
            printf("%d", b);
            b++;
        }
        int c = i-1; 
        // c=extra number beside the triangle (321), c will be 01 less then i.
        // Bcz, there is no extra number in 1st line, it started from 2nd line and in 2nd line, the first
        // extra number is 1, in 3rd line, the 1st extra number is 2.

        for(int l=1; l<i; l++){ //for reverse 321
            printf("%d", c);
            c--;
        }
        printf("\n");
    }
    return 0;
}