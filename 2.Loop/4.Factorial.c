#include<stdio.h>
int main(){
    int i,num,fact=1;
    scanf("%d",&num);
    for(i=0; i<num; i++){
       fact=fact*(num-i);
    }
    printf("Factorial of %d is %d",num,fact);
    return 0;

}
