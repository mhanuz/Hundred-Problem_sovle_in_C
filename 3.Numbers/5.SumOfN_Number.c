#include<stdio.h>
int main(){
    int num,sum=0;
    int i,n;
    scanf("%d",&num);
    for(i=0; i<num; i++){
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("%d",sum);
}
