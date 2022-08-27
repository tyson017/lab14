#include <stdio.h>
#include <stdlib.h>
#include "Git_test.h"

int main()
{
    int x,y,sumValue;
    x=20;
    y=25;
   sumValue= sum_v(x,y);
    printf("sum of %d and %d is %d",x,y,sumValue);

    return 0;
}
