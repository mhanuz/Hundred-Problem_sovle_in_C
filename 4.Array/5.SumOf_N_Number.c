#include<stdio.h>
int main(){
    printf("Enter array size:\n");
    int arr_size;
    int i,sum=0;
    scanf("%d",&arr_size);
    int arr[arr_size];
    printf("Enter Elements:\n");
    for(i=1; i<=arr_size; i++){
        scanf("%d",&arr[i]);
    }
    for(i=1; i<=arr_size; i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
}
