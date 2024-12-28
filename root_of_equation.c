#include <stdio.h>
#include <math.h>
void roots(int x, int y, int z);
int main (){
    int a,b,c;
    printf("enter three integer: ");
    scanf("%d%d%d",&a,&b,&c);
    roots(a,b,c);
}
void roots(int x, int y, int z){
    double k1, k2, delta;
    delta=y*y - 4*x*z;
    if(delta<0){
        int i;
        printf("\nThe equation has not reel roots. \n");
        k1= (-y -i*sqrt(delta))/2*x;
        k1= (-y +i*sqrt(delta))/2*x;
        if(k1==k2)
           printf("The equation has two complex roots equal to each other ");
        else
           printf("The root 1 = %f and the root 2 = %f",k1,k2);

    }
    else if(delta==0){
        k1= -y / 2*x;
        printf("The roots equal to each other and %f",k1);
    }    
    else{
        k1= (-y-sqrt(delta)) / 2*x;
        k2= (-y+sqrt(delta)) / 2*x;
        printf("The root 1 = %f and the root 2 = %f",k1,k2);

    }
}