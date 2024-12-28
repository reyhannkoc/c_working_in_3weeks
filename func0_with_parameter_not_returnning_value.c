#include <stdio.h>;
void sum(int y);
int main ()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    sum(x);
    return 0;
}

void sum(int y)
{
    int i, t=0;
    for(i=0; i<=y; i++)
    {
        t=t+i;
    }
    printf("%d",t);
}