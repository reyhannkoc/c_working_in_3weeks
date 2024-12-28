/*Write a program that takes a number from the user. 
This program displays the sum of the numbers from 1 to the entered number on the screen. 
While doing this, the main function must call the sum function. 
The sum function must receive an integer as a parameter from the called function,
 find the required sum and return to where it was called.*/

#include<stdio.h>
int func(int a);
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    printf("%d",func(x));
    return 0;

}
int func(int a)
{
    int sum=0;
    for(int i=0; i<=a; i++)
    sum+=i;
    return (sum);

}