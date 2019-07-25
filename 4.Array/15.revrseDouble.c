#include<stdio.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Reverse array:\n\n");

    for(j=i-1; j>=0; j--){
        printf("%d",arr[j]);
        printf("%d ",arr[j]);
    }
    return 0;
}

