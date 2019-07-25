#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    printf("Input a string\n");
    gets(a);
    strcpy(b,a);
    printf("String is :%s",b);
    return 0;
}
