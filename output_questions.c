#include <stdio.h>
/*void b(int);
int main(){
    int x=11;
    printf("%4d\n",x);
    b(x);
    printf("\n%4d",x);
    return 0;
    
}
void b(int n){
    printf("%4d",n);
    n=+2;
}

void b(int n);
int main(){
    double x=49.88;
    b(x);
    printf("%.2f",x);
    return 0;
}

void b(int n){
    printf("%4d\n",n);
    n=n+2;
}*/

void b(int x);
int main(){
    int x=4;
    printf("%3d\n",x);
    b(x);
    printf("%3d\n",x);
    return 0;
}
void b(int x){
    printf("%3d",x);
    x=x+1;
    printf("%3d",x);
    x=x+2;
}















