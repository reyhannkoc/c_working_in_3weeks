#include <stdio.h>
void sacma1(int x);
void sacma2(int *x);

int a=33;
int y;

int main (){
    int x=10;
    y=5;
    printf("%3d%3d%3d\n",x,y,a);
    sacma1(x);
    printf("%3d%3d%3d\n",x,y,a);
    sacma2(&x);
    printf("%3d%3d%3d\n",x,y,a);
    return 0;
}
void sacma1(int x){
    int y;
    y = x + 2;
    x = x * 3;
    a = a - 10;
    printf("%3d%3d%3d\n",x,y,a);
}
void sacma2(int *x){
    int a=10;
    y = *x + 2;
    *x = *x * 3;
    a = a - 3;
    printf("%3d%3d%3d\n",*x,y,a);
}