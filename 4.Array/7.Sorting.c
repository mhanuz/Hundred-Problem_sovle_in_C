#include<stdio.h>
int main(){
    printf("Enter array size\n");
    int n,i,j,key;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values:\n");
    for(i=1; i<=n; i++ ){
        scanf("%d",&arr[i]);
    }

    for (i = 2; i <= n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j > 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    printf("Sorted list in ascending order:\n");

      for (i = 1; i<=j; i++) {
        printf("%d\n", arr[i]);
      }

  return 0;
}


