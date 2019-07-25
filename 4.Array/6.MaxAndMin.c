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
    int max=arr[1],min=arr[1];
    for(i=1; i<=arr_size; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(i=1; i<=arr_size; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("max=%d  min=%d",max,min);
    return 0;
}
