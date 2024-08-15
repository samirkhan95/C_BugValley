#include<stdio.h>
int main (){

    int r;
    printf("\nEnter your number: ");
    scanf("%d",&r);
    printf("\n");

    for(int i = 1; i <= r; i++){ // for line
        int a = 1;
        for(int j = 1; j <= r; j++){ // inside the line 
            int d = a+64;
            char s = (char)d; //Alternate: char s = (char)a+64. This would reduce the 12the line
                printf("%c ", s); 
                a++;
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}