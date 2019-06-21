#include<stdio.h>
int main()
{
    /* Always declare the variables before using them  */
    int i = 0;  // declaration and initialization at the same time
    for(i = 0; i < 10; i++)
    {
        printf("i = %d\n", i);

        /* consequently, when i equals 10, the loop breaks.
            i is updated before the condition is checked-
            hence the value of i after exiting the loop is 10 */
     }
    printf("\n\The value of i after exiting the loop is %d\n\n", i);
    return 0;
}
