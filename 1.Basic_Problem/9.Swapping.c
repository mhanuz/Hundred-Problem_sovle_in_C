#include<stdio.h>
int main(){
    int num1;
    int num2;
    int temp;
    printf("Enter two number:");
    scanf("%d%d",&num1,&num2);
    //using temporary variable
    temp=num1;
    num1=num2;
    num2=temp;

    printf("Swap: %d <> %d\n",num1,num2);


    //without temporary variable
    int x = 10, y = 15;
    x = x + y - (y = x);
    printf("x = %d and y = %d",x,y);
    getch();

    //using bitwise operator
    x = 6, y = 4;
    x = x^y;
    y = x^y;
    x = x^y;
    printf("\nx = %d and y = %d", x, y);
    getch();

    //using multiplication and division
    x = 6, y = 4;
    x = x*y;
    y = x/y;
    x = x/y;
    printf("\nx = %d and y = %d", x, y);
    getch();

    return 0;

}
