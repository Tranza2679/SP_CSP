// SP 6th Expression Practice
#include <stdio.h>
#include <math.h>

int main(void) {
    printf("7-24/8x4+6=%d\n", 7-24/8*4+6);

    printf("18/3-7+2x5=%d\n", 18/3-7+2*5 );

    printf("(17-6/2)+4x3=%d\n", 17-6/2+4*3);

    printf("-2(1x4-2/2)+(6+2-3)=%d\n",(1*4-2/2)*-2+6+2-3);

    printf("-1x[(3-4x7)/5]-2x24/6=%d\n",(3-4*7)/5*-1-2*24/6);

    printf("(3x5^2/15)-(5-2^2)=%d\n",(3*(int)pow(5, 2)/15)-(5-(int)pow(2, 2)));

    printf("(1^4x2^2+3^3)-2^5/4=%d\n",((int)pow(1, 4)*(int)pow(2, 2)+(int)pow(3, 3))-(int)pow(2, 5)/4);

    printf("(22/2-2x5)^2+(4-6/6)^2=%d\n", (int)pow(22/2-2*5, 2)+(int)pow(4-6/6, 2));

    return 0;
}