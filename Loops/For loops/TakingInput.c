// #include<stdio.h>
// int main (){
//     for (int i=1;i<=2;i++){ // i++ is the shortcut of i = i+1  
//         printf("Hello world\n");
//     }
//     return 0;

// }


#include<stdio.h>
int main(){

    int s;
    printf("\nPlease enter how many time you want to print it: ");
    scanf("%d",&s);
    printf("\n");

    for(int i=1; i<=s; i++){
        printf("Hello world\n");
    }
    
    printf("\n");
    return 0;
}
