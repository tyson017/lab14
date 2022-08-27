#include <stdio.h>
#include <stdlib.h>
#include "Git_test.h"

int main()
{
    int x,y,sumValue,divvalue;
    x=50;
    y=10;
    divvalue=Div_v(x,y);
   sumValue= sum_v(x,y);
    printf("sum of %d and %d is %d",x,y,sumValue);
    printf("div of %d and %d is %d",x,y,divvalue);

    return 0;
}
