#include<stdio.h>

int main()
{

    int i = 0;  // declaration and initialization at the same time
    printf("\nPrinting numbers using while loop from 0 to 9\n\n");
    while(i<10)
    {
        printf("%d\n",i);
        i++;    // same as i=i+1;
      }
    return 0;
}
