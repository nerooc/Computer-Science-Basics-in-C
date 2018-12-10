#include <stdio.h>
int main()
{
    int i, space, height, k=0;

    printf("Please enter the height of the triangle: ");
    scanf("%d",&height);

    for(i=1; i<=height; ++i, k=0)
    {
        for(space=1; space<=height-i; ++space)
        {
            printf("  ");
        }

        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }

    return 0;
}
