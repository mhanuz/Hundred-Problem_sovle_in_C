#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    // Using modulus
    if(num%2==0)
        printf("%d is Even\n",num);
    else if(num%2==1)
        printf("%d is Odd\n",num);

    // Without using modulus

    if ((num/2)*2==num)
        printf("%d is Even ");
    else
        printf("%d is Odd");
    return 0;
}
