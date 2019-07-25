#include<stdio.h>
#include<string.h>
int main(){
    int res;
    char a[100];
    char b[100];
    printf("Enter a string:\n");
    gets(a);
    printf("ENter string:\n");
    gets(b);
    res=strcmp(a,b);
    printf("%d\n",res);
    printf("0  = string is same\n");
    printf("-1 = string is different\n");
    return 0;

}
