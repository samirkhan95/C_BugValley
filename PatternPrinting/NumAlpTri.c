#include<stdio.h>
int main (){

    int r;
    printf("\nEnter your number: ");
    scanf("%d",&r);
    printf("\n");

    for(int i = 1; i <= r; i++){ // for line

        int a = 1;
        for(int j = 1; j <= i; j++){ // for inside the line 
            int d = a+64;
            char s = (char) d; //Alternate: char s=(char)a+64. This would reduce the 12the line
                
                if(i%2 != 0){ // for checking the odd and even number
                    printf("%d ", a); 
                }
                else{ // only even row will be Alphabet
                    printf("%c ", d);
                }
                a++;
                
        }
        printf("\n"); // for next line
    }
    
    printf("\n"); // for beautification
    return 0;
}