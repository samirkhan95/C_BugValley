#include <stdio.h>
int main() {

    int r, c;
    
    printf("\nEnter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("\n");
    
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (i == 1 || i == r || j == 1 || j == c) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}
