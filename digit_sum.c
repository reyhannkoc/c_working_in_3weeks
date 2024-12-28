/*write a program that  has two functions: main() and digit_sum().
digit_sum function take a parameter from where it is called and 
return value of the integer is receives to the place where it is called.
this function calcultes  the sum of the digits of the integer it takes a parameter and returns this sum. */

#include<stdio.h>
int digit_sum(int a);
int main(){
    int x;
    printf("enter a integer: ");
    scanf("%d",&x);
    
    printf("%d",digit_sum(x) );
}
int digit_sum(int a){
    int k,s=0;
    while(a!=0){
        k=a%10;
        a=a/10;
        s+=k;
    }
    return s;

}