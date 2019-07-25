#include<stdio.h>
int main(){
    int i,n,j=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        j=j+arr[i];
    }
    printf("sum of array elements : %d",j);

    return 0;
}
