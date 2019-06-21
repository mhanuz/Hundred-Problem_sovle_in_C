#include<stdio.h>
int main(){
    int f0=0,f1=1;
    int num,i=0,f,c;
    scanf("%d",&num);
    printf("%d\t%d",f0,f1);
    while(i<num){
        f=f0+f1;
        printf("\t%d", f);
        f0=f1;
        f1=f;
        i++;
    }
    return 0;

}
