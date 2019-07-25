#include<stdio.h>
int main(){
    int i,n,j,k;
    int freq=1;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\n");

    for(j=0; j<n; j++){
        for(k=j+1; k<n; k++){
            if(arr[k]==arr[j]){
                freq++;
                printf("%d is %d times\n",arr[j],freq);
            }
            else{
               printf("%d is 1 times\n",arr[j]);
            }
        }
        freq=1;
    }

    return 0;
}

