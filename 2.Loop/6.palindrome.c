#include<stdio.h>
int main(){
    int num,num2;
    int sum=0,m;
    scanf("%d",&num);
    num2=num;
    while(num!=0){
        m=num%10;
        num=num/10;
        sum=sum*10+m;
    }
    if(sum==num2)
        printf("%d is palindrome",sum);
    else
        printf("%d is not palindrome",num2);
    return 0;
}
