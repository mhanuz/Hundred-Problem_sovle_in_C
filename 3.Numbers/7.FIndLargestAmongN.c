#include<stdio.h>
int main(){
    int i,num;
    scanf("%d",&num);
    int arr[num];
    for(i=1; i<=num; i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(i=1; i<=num; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
