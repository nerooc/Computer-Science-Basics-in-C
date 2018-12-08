#include <stdio.h>
#include <stdlib.h>

int count1(unsigned int p);


int count1(unsigned int p)
{
int k = 0;
for( ; p != 0; p >>= 1) k += p & 1;
return k;
}


int main(void)
{
    unsigned int l = 572;
    printf("Number %u has %d '1s' in it's binary form.", l, count1(l));
}
