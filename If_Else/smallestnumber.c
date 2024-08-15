#include <stdio.h>
int main(){
    int a;
    int b;
    int c;

    printf("Enter your 1st number: ");
    scanf("%d", &a);
    printf("Enter your 2nd number: ");
    scanf("%d", &b);
    printf("Enter your 3rd number: ");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        printf("%d is thee smallest number", a);
    }
    if (b < a && b < a)
    {
        printf("%d is thee smallest number", b);
    }
    if (c < a && c < b)
    {
        printf("%d thee smallest number", c);
    }
}