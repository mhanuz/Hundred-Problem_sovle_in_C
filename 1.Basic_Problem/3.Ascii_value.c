#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch); /* %c is the format specifier to take character as input */
    printf("Ascii value of character %c is %d",ch,ch);
    return 0;
}
