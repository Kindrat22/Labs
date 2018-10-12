#include<stdio.h>
#include<math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  printf("Input lenth for massif (6 - 100)\n");
  int k;
  scanf("%d", &k);
  int a [100];
  for(int i = 0; i < k; i++)
    {
      a[i] = rand();
      printf("Number of massif №%d = %d \n",i, a[i]);
    }
  int lenth = k - 2;
  int newArray[100];
  for(int i = 0; i < lenth - 3; i++)
    {
      newArray[i] = a[i+5];
    }
  for(int i = 1; i < 4; i++){
    newArray[lenth + i] = rand();
    }
  for(int i = 0; i < lenth; i++){
    printf("New number of massif №%d = %d\n",i, newArray[i]);
   }
}
