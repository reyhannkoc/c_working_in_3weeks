/*Write a program that takes a real number from the user and prints p on the screen 
if this number is positive, n if it is negative, and s if it is zero. 
Create a function called func() for this program. 
This function should receive an integer from the user and return one of the p, n, s characters 
that determine the type of this number to the place where it is called. 
The main function should call the func function and display the result on the screen.*/
#include <stdio.h>
char func();
int main()
{
    printf("%c",func());
}
char func()
{   
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    if(x<0)
    return ('n');
    else if(x>0)
    return ('p');
    else
    return ('s');

}