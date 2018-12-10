#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int i;
    float eps=1e-15;

// the smaller eps is, the greater precision

    float sum=0;
    for(i=0; (1/pow(2,i))>eps; i=i+1){
        sum=sum+(1/pow(2,i));
    }
printf("The number of added elements %d\n", i);
printf("The sum is %.20f", sum);
}
