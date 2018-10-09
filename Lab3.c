#include<stdio.h>
#include<math.h>

int main(void)
{
  double  logar, l, tng, y, a;
  double x;
  double se = 0;
  double s = 0;
  double n;
for(x = 0.1; x <= 0.8; x +=0.07)
    {
      l = (1 + x) / (1 - x);
      tng = (atan(x)/2);
      logar = log(l);
      y = logar/4 + tng;

      for(n = 0; n<4; n++){
        s = s + pow(x, 4*n + 1)/(4*n + 1);
        }
      while(a< 0.0001){ //Доробити цикл 
        a = pow(x, 4*n + 1)/(4*n + 1);
          se = se + pow(x, 4*n + 1)/(4*n + 1);
        }

      printf("x = %f,   SN =%f   SE =%f   y = %f \n", x, s, se, y );
    }
}
