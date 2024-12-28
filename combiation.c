/*write a program that takes two number from the user and it calculate combination for this numbers. 
the program includes 3 functions 
1. factorial function that take a integer from where it is called and 
it should return the factorial value of the number is receives to the place where it is called
2.combination function that take two integer from where it is called and 
it should return the combination value of the integers is recceives to the place where it is called.
3.main function that take two integer from the user and 
it should display the combination values of these integers on the screen by calling the necessary functions.*/

#include <stdio.h>
int factorial(int x);
int combination(int y, int z);
int main ()
{
    int a,b;
    printf("enter two number: ");
    scanf("%d%d",&a,&b);
    printf("%d",combination(a,b));
    return 0;
}

int factorial(int x){
    int multiply=1;
    for(int i=x; i>=1; i--)
        multiply*=i;
    return multiply;
}

int combination(int y, int z){
    int s;
    s=factorial(y)/(factorial(z)*factorial(y-z));
    return s;

}