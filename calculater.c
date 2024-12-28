#include <stdio.h>
void f(int n);
double f1(int n);
double f2(int n);
double f3(int n);
int main()
{
    int a;
    printf("enter a positive integer: ");
    scanf("%d",&a);
    f(a);
    return 0;
}
void f(int n){
    if(n>=30)
       printf("%.2f",f1(n));
    else if(n>10 && n<30)
       printf("%.2f",f2(n));
    else if(n>0 && n<=10)
       printf("%.2f",f3(n));    
} 

double f1(int n){
   double sum=0;
   for(int i=0; i<=2*n+1; i++)
       sum=sum+1.0/i;
   return sum;    
}

double f2(int n){
   int sum=0;
   for(int i=0; i<=2*n; i++){
      if(i%2==0){
         sum+=i;
      }
   }
   return sum;
}

double f3(int n){
   int factorial=1, i;
   for(i=1; i<=n; ++i){
      factorial*=i;
   }
   return factorial;
}

