#include<stdio.h>
#define PI 3
int menu();
void square(int x);
void circle(double y);

int menu()
{
    int tercih;
    printf("\n1. KARE\n");
    printf("2. DAİRE\n");
    printf("3. DUR\n");
    printf("SEÇENEĞİ GİİRİNİZ:");
    scanf("%d",&tercih);
    return (tercih);
}
int main()
{
    int a, secim;
    double r;

    do{
    secim= menu();
    if(secim==1){
       square(a);
    }
    else if(secim==2){
       printf("enter radius of the circle: ");
       scanf("%lf",&r);
       circle(r);
    }
    }while(secim!=3);

    return 0;
}

void square(int x){
    printf("enter a number: ");
    scanf("%d",&x);
    printf("area: %d\n",x*x);
    
}

void circle(double y)
{
    printf("area: %lf \n",PI*y*y);
}
