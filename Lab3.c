#include<stdio.h>
#include<math.h>

int main(void)
{
  double  logar, l, tng, y;
  double x = 0.1;
  double sn = 0;
  double se = 0;
  double e = 1;
for(int k = 0; k < 10; k++)
    {
      l = (1 + x) / (1 - x);
      tng = (atan(x)/2);
      logar = log(l);
      y = logar/4 + tng;
      for(int ch = 0; ch < 3; ch++){
          double n = 1;
          sn += pow(x, 4*n+1)/ (4*n + 1);
          n++;
       }
      while(e >= 0.0001){
          double g = 1;
          e = pow(x, 4 * g + 1)/ (4*g + 1);
          se += e;
          k++;
        }

      x +=0.07;
      printf("x = %f,   SN =%F   SE =%f   y = %f \n", x, sn, se, y );
    }
}
