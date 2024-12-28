/*A function that has parameters and does not return a value, but draws a square with the entered number. 
* is used in drawing squares*/

#include <stdio.h>
void square(int x);
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    square(x);
    return 0;
}
void square(int x)
{
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        printf("*");
        printf("\n");
    }
}
