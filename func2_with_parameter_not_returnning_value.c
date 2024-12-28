/*A program that takes the radius value of a circle from the user as input 
and displays the area of ​​this circle on the screen.*/

#include <stdio.h>
#define PI 3
void area(int x);
int main ()
{
    int r;
    printf("enter a radius: ");
    scanf("%d",&r);
    area(r);
    return 0;
}
void area(int x)
{
    float a; 
    a=PI*x*x;
    printf("%.2lf",a);
}