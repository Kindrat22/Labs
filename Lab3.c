#include<stdio.h>
#include<math.h>

int main(void)
{
  double  logar, l, tng, y, s, sn;
  double x = 0.1;
  double sumY = 0;
  double nn = 1;
for(int a = 1; a <= 8; a++)
    {
      l = (1 + x) / (1 - x);
      tng = (atan(x)/2);
      logar = log(l);
      y = logar/4 + tng;
      sumY = sumY + y;
      s = x + pow(x, 5)/5;
      sn = nn + pow(nn, 5)/5;
        for(double n = 0; n<3; n++){
        s = s + pow(x, 4*n + 1)/(4*n + 1);
          }
        for(double n = 0; n<3; n++){
          sn = sn + pow(nn, 4*n + 1)/(4*n + 1);
          }
      printf("x = %f,   SN =%f    SE =%f   y = %f \n", x, sn, s, sumY );
      x += 0.1;
      nn++;
    }
}
