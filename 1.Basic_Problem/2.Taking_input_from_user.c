#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter values"); /* printf() is used to display text onto the screen */
    scanf("%d%f",&a,&b);   /* scanf() is uded to take input from the user */
    /* %d and %f is a format specifier to take input from user
    /* & is used to assign the input value to the variable and store it at that particular location. */
    printf("Value of a=%d, b=%f ",a,b);
    return 0;
}
