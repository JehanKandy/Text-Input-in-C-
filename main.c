#include <stdio.h>
#include <stdlib.h>




int main()
{
    double str[100];

    printf("Enter a value :");
    str = gets(str);

    printf("\nYou entered: ");
    puts(str);
    return 0;
}
