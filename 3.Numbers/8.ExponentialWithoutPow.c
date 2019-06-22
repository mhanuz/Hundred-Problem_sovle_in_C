#include<stdio.h>
int main(){
    int num;
    int power;
    scanf("%d%d",&num,&power);
    int i,sum=1;
    for(i=1; i<=power; i++){
        sum=sum*num;
    }
    printf("%d",sum);
    return 0;
}
