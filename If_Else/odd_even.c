#include<stdio.h>
int main(){

    int n;
    printf("Please enter your number: ");
    scanf("%d", &n);
    
    if(n%2==0){ // even
        printf("Your number is EVEN");
    }
    else{
        printf("Your number is ODD");
    }
    return 0;
}
