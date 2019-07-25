#include<stdio.h>
int main(){
    char a[100],b[100];
    printf("enter a string :\n");
    gets(a);
    stringCopy(a,b);
    printf("String is %s",b);
    return 0;
}
int stringCopy(char a[], char b[]){
        int i=0;
        while(a[i]!=0){
            b[i]=a[i];
            i++;
        }
        b[i]='\0';
}
