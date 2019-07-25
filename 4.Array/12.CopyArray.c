#include<stdio.h>
int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\n");

    for(j=0; j<n; j++){
        arr2[j]=arr[j];
    }
    for(j=0; j<n; j++){
        printf("%d\n",arr[j]);
    }
    return 0;
}
