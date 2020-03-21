#include<stdio.h>
#include<math.h>
int min(int k,...){
    int *p = &k;
    int min  = 999999;
    for ( ; k!=0;k--){
         if( min > *(++p)){
          min = *(p);
         }
    }
    return min;
}
int main(void){
    printf("First call of function\n");
    printf("%d\n",min(3,1,2,3));
    printf("Second call of function\n");
    printf("%d\n",min(10,1,2,3,4,5,6,7,8,9,10));
    printf("Third call of function\n");
    printf("%d\n",min(20,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20));
    }
