#include<stdio.h>
int main(){
    printf("Enter array size:\n");
    int arr_range;
    scanf("%d",&arr_range);
    int arr[arr_range];
    int i,position,value;
    printf("Enter values of array\n");
    for(i=1; i<=arr_range; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position\n");
    scanf("%d",&position);
    printf("Enter Value:\n");
    scanf("%d",&value);
    for(i=arr_range; i>=position; i--){
        arr[i+1]=arr[i];
    }
    arr[position]=value;
    printf("Re arrange array\n");
    for(i=1; i<=arr_range+1; i++){
        printf("%d\n",arr[i]);
    }
    return 0;

}
