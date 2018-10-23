#include <stdio.h>
#include <locale.h>
 int main(void){
     setlocale(LC_ALL,"Ukrainian");
 printf("Введіть розмір множин: \n");
 int lenth;
 scanf("%d",&lenth);
 int nam;
 char mnA[100];
 char mnB[100];
 char mnU[] = "abcdefghijklmnopqrstuvwxyz";
 int potA = 0;
 int potB = 0;
 int aa, bb;
 for(int m = 0; m<lenth; m++){
     printf("Символ %d для множини А: ",m);
     scanf("%s", &mnA[m]);
     printf("\n");
   }
 for(int n = 0; n<lenth; n++){
     printf("Символ %d для множини В: ", n);
     scanf("%s", &mnB[n]);
      printf("\n");
    }

    //Різниця множин
    printf("Різниця множини А і В ={");
 for(int x = 0; x<lenth; x++){
        nam = 0;
   for(int y = 0; y<lenth; y++){
        if(mnA[x]!=mnB[y]){
        nam++;
     }
   }
     if(nam == lenth){
        printf("1,  ");
     }else{
         printf("0,  ");
     }}

  printf("}\n");
  printf("Різниця множини В і A ={");
 for(int x = 0; x<lenth; x++){
        nam = 0;
   for(int y = 0; y<lenth; y++){
     if(mnB[x]!=mnA[y]){
      nam++;
      }
    }
     if(nam == lenth){
        printf("1,  ");
     }else{printf("0,  ");}
  }

  //Доповнення множин
  printf("}\n");
  printf("Доповнення множини А  ={");
     for(int x = 0; x<26; x++){
        nam = 0;
       for(int y = 0; y<lenth; y++){
         if(mnU[x]!=mnA[y]){
         nam++;
     }
   }
      if(nam == lenth){
        printf("1,  ");
     }else{printf("0,  ");}
  }
  printf("}\n");
 printf("Доповнення множини B  ={");

  for(int x = 0; x<26; x++){
        nam = 0;
   for(int y = 0; y<lenth; y++){
     if(mnU[x]!=mnB[y]){
      nam++;
     }
   }
     if(nam == lenth){
        printf("1,  ");
     }else{printf("0,  ");}
  }

  //Потужність множин
  printf("}\n");
   for(int x = 0; x<lenth; x++){
      aa = 0;
     for(int y = 0; y<lenth; y++){
     if(mnA[x]!=mnA[y]){
       aa++;
       }
     }
     if(aa == lenth-1){
        potA++;
      }
    }
    for(int x = 0; x<lenth; x++){
        bb = 0;
     for(int y = 0; y<lenth; y++){
       if(mnB[x]!=mnB[y]){
       bb++;
         }
       }

     if(bb == lenth -1){
        potB++;
      }
   }
   if(potA == lenth){
    printf("Потужність множини А = %d\n",potA);

   }
    else{
     potA++;
     printf("Потужність множини А = %d\n",potA);
    }
        if(potB == lenth){
    printf("Потужність множини B = %d\n",potB);

   }
    else{
     potB++;
     printf("Потужність множини B = %d\n",potB);
    }
 }

