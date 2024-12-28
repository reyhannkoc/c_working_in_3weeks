#include <stdio.h>
int k=10, p=20;
void f1(int*, int);
int f2(int);
int main(){
    int x=1, y=2;
    printf("%3d%3d%3d\n",p,k,x);
    f1(&k,y);
    printf("%3d%3d%3d\n",p,k,x);
    k+=f2(p);
    printf("%3d%3d%3d\n",p,k,x);
    return 0;
}
void f1(int *x, int k){
    p++;
    *x=*x+k;
    printf("%3d%3d%3d\n",p,k,*x);
}
int f2(int x){
    int p=1;
    int *s=&x;
    p=p+x;
    printf("%3d%3d%3d",p,k,x);
    return (*s);

}