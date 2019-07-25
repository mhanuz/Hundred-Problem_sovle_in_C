#include<stdio.h>
int main(){
    printf("Enter array size:\n");
    int arr_size;
    int i,j,k,l;
    scanf("%d",&arr_size);
    int arr[arr_size];
    printf("Enter array values\n");
    for(i=1; i<=arr_size; i++ ){
        scanf("%d",&arr[i]);
    }
    for(j=1; j<=arr_size; j++){
        for(k=2; k<=arr_size; k++){
                if(arr[j]=arr[k]){
                    for(l=k; k<arr_size; k++){
                        arr[l]=arr[l+1];
                    }
            }
        }
    }
    for(i=1; i<arr_size; i++ ){
        printf("%d\n",arr[i]);
    }
}
