#include<stdio.h>
#include<math.h>

int main(void)
{
  double  logar, l, tng, y, e;
  double x = 0.1;
  double sn = 0;
  int h;
for(int k = 0; k < 10; k++)
    {
      double se = 0;
      l = (1 + x) / (1 - x);
      tng = (atan(x)/2);
      logar = log(l);
      y = logar/4 + tng;
      for(int ch = 0; ch < 3; ch++){
          double n = 1;
          sn += pow(x, 4*n+1)/ (4*n + 1);
          n++;
       }
        e = 1;
        h = 0;
      while(e > 0.0001){
          e = pow(x, 4 * h + 1)/ (4*h + 1);
          se += e;
          h++;
        }
      printf("x = %f,   SN =%F   SE =%f   y = %f \n", x, sn, se, y );
      x +=0.07;
    }
}
