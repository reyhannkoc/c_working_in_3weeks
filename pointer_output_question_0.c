#include <stdio.h>
int a=5;
void xyz(int a, int *b){
    *b = a + *b / 3;
    a=4;
    printf("%3d%3d\n",a,*b);
}
int main (){
    int b=9, a=12;
    printf("%3d%3d\n",a,b);
    xyz(b,&a);
    printf("%3d%3d\n",a,b);
    return 0;
}