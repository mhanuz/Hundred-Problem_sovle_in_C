#include<stdio.h>
int main(){
    char ch;
    printf("Enter your grade:");
    scanf("%c",&ch);
    switch(ch){
        case 'A':
            printf("Excellent:");
            break;
        case 'B':
            printf("Keep it up!\n\n");
            break;
        case 'C':
            printf("Well done\n\n");
            break;
        case 'D':
            printf("You passed\n");
            break;
        case 'F':
            printf("Better luck next time\n");
            break;
        default:
            printf("Invalid grade\n");
    }
}
