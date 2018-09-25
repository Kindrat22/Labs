#include<stdio.h>
#include<math.h>

int main(void)
{
  double  logar, l, tng, y;
  double x = 0.1;
  double sum = 0;
for(int a = 1; a <= 8; a++)
    {
      l = (1 + x) / (1 - x);
      tng = (atan(x)/2);
      logar = log(l);
      y = logar/4 + tng;
      sum = sum + y;
      x = x + 0.1;
      printf("x%d  =  %f \n", a, sum );
    }
}
