#include<stdio.h>
int main(){

    int l; // length of the rectagle
    printf("Enter the length of rectangle: ");
    scanf("%d", &l);

    int b; // wide of the rectangle
    printf("Enter the wide of the rectangle: ");
    scanf("%d", &b);

    int area = l*b;
    int perameter = 2 * (l+b);

    if( area > perameter){
        printf("The area is bigger than the perameter");
    }

    else{
        printf("Perameter is bigger than the area");
    }

    return 0;
}