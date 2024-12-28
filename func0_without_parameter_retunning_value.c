/*Write a function named sum that has no parameters and returns a value to the function it is called from. 
The sum function takes an integer from the user and finds the sum of the numbers from 1 to that integer.
 The main function must call the sum function and display the value returned by the sum function on the screen.*/
#include <stdio.h>
int sum();
int main ()
{
    printf("%d",sum());
}
int sum()
{
    int x,s;
    printf("enter a number: ");
    scanf("%d",&x);
    for(int i=0; i<=x; i++)
    {
        s=s+i;
    }
    return s;


}