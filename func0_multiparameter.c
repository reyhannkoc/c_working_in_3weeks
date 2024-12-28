/*Write a program that takes two integers as input from the user and calculates the expression x to the power of y.
 In the program, the func function should accept these two expressions as parameters, calculate the x prime y expression 
 and display it on the screen. 
main should take these two parameters as input*/
#include <stdio.h>
void func(int a, int b);
int main()
{
    int a,b;
    printf("enter two number: "); 
    scanf("%d%d",&a,&b);
    func(a,b);
    return 0;
}
void func(int x, int y)
{
    int s=1;
    for(int i=1; i<=y; i++)
    {
        s*=x;
    }
    printf("%d",s);
}
