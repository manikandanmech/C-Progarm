#include <stdio.h>
 
void main()
{
    int num;
    int num; 
    printf("Enter a number: \n");
    scanf("%d", &num);
    if (num > 0)
        printf(" positive number %d ", num);
    else if (num < 0)
        printf(" negative number %d ", num);
    else
        printf("neither positive nor negative");
}