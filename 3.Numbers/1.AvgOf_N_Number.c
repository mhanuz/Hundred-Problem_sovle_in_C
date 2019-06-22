#include<stdio.h>
int main(){
    int i,j,sum=0;
    printf("How many number you would average:\n");
    scanf("%d",&i);
    int num[i];
    printf("Enter numbers\n");
    for(j=1; j<=i; j++){
        scanf("%d",&num[j]);
    }
    for(j=1; j<=i; j++){
        sum=sum+num[j];
    }
    float avg=sum/i;
    printf("average is %f",avg);
    return 0;
}
