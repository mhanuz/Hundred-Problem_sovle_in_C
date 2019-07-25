#include<stdio.h>
int main(){
    printf("Enter the array range:");
    int range;
    scanf("%d",&range);
    int arr[range];
    int i;
    for(i=1; i<=range; i++){
        scanf("%d",&arr[i]);
    }
    printf("Reverse array\n");
    for(i=range; i>0; i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}
