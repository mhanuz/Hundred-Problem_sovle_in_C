#include<stdio.h>
#include<ctype.h> // to use system defined function islower & toupper

int main()
{
    char alphabet;
    printf("Enter an alphabet : ");
    putchar('\n');  // to move to next Line

    alphabet=getchar(); // getchar is like a scanf function

    printf("\n\nReverse case of %c is :  ",alphabet);

    if(islower(alphabet))
        putchar(toupper(alphabet)); // putchar is like a printf function

    else
        // must be an uppercase character
        printf("%c",tolower(alphabet)) ;
    return 0;
}
