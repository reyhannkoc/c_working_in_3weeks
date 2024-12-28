//parametresiz fonksiyonlar
// Write a function that takes a positive integer from the user 
//and draws a square with side length equal to this value. Use the * sign when drawing a square


#include <stdio.h>
void karefunc();

int main(){
    karefunc();
    return 0;
    
}
void karefunc()
{
    int x;
    printf("sayı giriniz: ");
    scanf("%d",&x);
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        printf("*");
        printf("\n");
    }
}
