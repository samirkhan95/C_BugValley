#include<stdio.h>
int main (){
    
    int p;
    printf("\nEnter your number: ");
    scanf("%d",&p);

    for(int i=2; i<=p-1; i++){
        if(p%i==0){
            printf("The number is COMPOSITE");
            break;
        }
        else{
            printf("The number is PRIME");
            break;
        }
    }
    return 0;
}