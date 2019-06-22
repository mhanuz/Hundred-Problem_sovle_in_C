#include<stdio.h>
#include<math.h>
int main(){
    int num,i=0,m,sum=0;
    printf("Enter a integer value\n");
    scanf("%d",&num);
    int num2=num;
    while(num!=0){
        num=num/10;
        i++;
    }

    while(num2!=0){
        m=num2%10;
        num2=num2/10;
        sum=sum+pow(m,i);
    }
        printf("%d\n",sum);
    return 0;


}
