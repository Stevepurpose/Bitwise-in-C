#include <stdio.h>


int and(int x, int y){
    printf("Enter x:\n");
    scanf("%d", &x);

    printf("Enter y:\n");
    scanf("%d", &y);

    return x & y;
}

int or( int x, int y){
    printf("Enter x:\n");
    scanf("%d", &x);

    printf("Enter y:\n");
    scanf("%d", &y);

    return x | y;
}

int right( int x, int y){
    printf("Enter x:\n");
    scanf("%d", &x);

    printf("Enter y:\n");
    scanf("%d", &y);

   return x >> y;
}


int left(int x, int y){
    printf("Enter x:\n");
    scanf("%d", &x);

printf("Enter y:\n");
    scanf("%d", &y);

    return x << y;
}

int xor(int x, int y){
    printf("Enter x:\n");
    scanf("%d", &x);

printf("Enter y:\n");
    scanf("%d", &y);

   return x ^ y;
}


int main(){
    int x;
    int y;
    int *p = &x;
    int *q = &y; 
    int operator;
    printf("Enter operator number: 1 for &\n 2 for |\n  3 for >>\n 4 for <<\n 5 for ^\n Enter operator number here:");
    scanf("%d", &operator);

switch(operator){
 case 1:
 operator = and;
 
 int result1 = and(*p, *q);
 printf("Result is: %d\n", result1);
 printf("END");
  break;

 case 2:
 operator = or;
  int result2 = or(*p, *q);
 printf("Result is: %d\n", result2);
 printf("END");
 break;


case 3:
operator = right;
int result3 = right(*p, *q);
 printf("Result is: %d\n", result3);
 printf("END");
break;

case 4:
operator = left;
int result4 = left(*p, *q);
 printf("Result is: %d\n", result4);
 printf("END");
break;

case 5:
operator = xor;
int result5 = xor(*p, *q);
 printf("Result is: %d\n", result5);
 printf("END");
break;

default:
 printf("invalid operation\n");

}

return 0;

}