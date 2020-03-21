#include <stdio.h>
#include <math.h>

int main(){
    double a, n, sum, e;
    e = 0.0001;
    a = 1;
    n = 0;
    sum = 1;
    while( a > e){
        a = (1/ (4*n + 20)) *a;
        sum = sum + a;
        n++;
    }
    printf("%lf\n", sum);
}
