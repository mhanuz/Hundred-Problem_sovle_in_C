#include<stdio.h>
int main(){
    int num,num2;
    int sum=0,m;
    scanf("%d",&num);
    num2=num;
    while(num!=0){
        m=num%10;
        num=num/10;
        sum=sum+m;
    }
    printf("Summation is %d",sum);
    return 0;
}

