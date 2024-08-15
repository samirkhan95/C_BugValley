#include<stdio.h>
int main(){
    
    int m;
    printf("Please enter your number: ");
    scanf("%d",&m);

// else if is something that do the work of "if" inside the else

if(m>90){
    printf("Your grade  is A+");
}
else if (m>80){ 
    printf("Your grade is A");
}
else if (m>70){
    printf("Your grade is A-");
}
else if (m>60){
    printf("Your grade is B");
}
else if (m>50){
    printf("Your grade is B-");
}
else if (m>40){
    printf("Your grade is C");
}
else if (m<40){
    printf("Sorry you are fail");
}
}