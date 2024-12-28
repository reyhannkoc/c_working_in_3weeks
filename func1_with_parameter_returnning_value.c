/*Write a program that receives a positive integer value from the user and 
displays how many digits this number has on the screen.
While writing the program, use a function called bul. 
The bul function must get an integer value from where it was called, 
find the place value of this integer and return it to the place where it was called.*/

#include <stdio.h>
int bul(int a);
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    printf("%d",bul(x));
}
int bul(int a)
{
    int i=0;
    while(a)
    {
        a=a/10;
        i++;
    }
    return i;
}
