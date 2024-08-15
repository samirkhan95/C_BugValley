#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}

int main(){

    int n,r;
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d", &r);

    //nCr = n!/(r!*(n-r)!)
    
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    printf("\nThe factoral is: %d\n\n", nCr);
    
    return 0;
}