#include<stdio.h>
int main(){
    int i,n,j,k;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\n");

    for(j=0; j<n; j++){
        for(k=j+1; k<n; k++){
            if(arr[k]!=arr[j]){
                printf("%d\n",arr[k]);
            }
        }
    }
    return 0;
}

