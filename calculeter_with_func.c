#include <stdio.h>
void sum(int x, int y);
void multiply(int x, int y);
void divide(int x, int y);
void subtract(int x, int y);
int main(){
    int choice,x,y;
    do{
    printf("\n-----MENU------\n");
    printf("1.Sum\n2.Multiply\n3.Divide\n4.Subtract\n5.Stop\n");
    printf("\nenter two integer:");
    scanf("%d%d",&x,&y);
    printf("Enter choice: \n");
    scanf("%d",&choice);
    

    if(choice==5) break;

    switch(choice){
    case 1:
    sum(x,y); 
    break;
    case 2:
    multiply(x,y); 
    break;
    case 3:
    divide(x,y); 
    break;
    case 4:
    subtract(x,y);
    break;
    default: printf("\nwrong choice!\n");
    }
    } while(1);
    return 0;
}
void sum(int x, int y){
    printf("x + y = %d",x+y);
}
void multiply(int x, int y){
    printf("x * y = %d",x*y);
}
void divide(int x, int y){
     printf("x / y = %d",x/y);
}
void subtract(int x, int y){
    printf("x - y = %d",x-y);
}