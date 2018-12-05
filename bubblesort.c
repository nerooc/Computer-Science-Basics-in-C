#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


const int N = 10;
int main(void)
{

  int d[N],i,j,temp;
  srand ( time(NULL) );
  printf("Before sorting:\n\n");
  for(i = 0; i < N; i++)
  {
  
     d[i] = rand() % (100 + 1 - (-100)) + (-100);
  
  }
  
  for(i = 0; i < N; i++)
  {

     printf("%d ", d[i]);
  
  } 

  printf("\n\n");


  for (i = 0; i<N-1; i++)
  {
      for (j=0; j<N-1-i; j++)
      {
			if (d[j] > d[j+1])
			{
				temp = d[j+1];
				d[j+1] = d[j];
				d[j] = temp;
			}
      }
  }

  printf("After sorting:\n\n");
  for(i = 0; i < N; i++)
  {

   printf("%d ", d[i]);

  }

printf("\n\n");

}
