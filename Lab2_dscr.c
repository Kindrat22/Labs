#include <stdio.h>
#include <locale.h>
 int main(void){
     setlocale(LC_ALL,"Ukrainian");
 printf("Введіть розмір множин: \n");
 int lenth;
 scanf("%d",&lenth);
 int nam;
 int bol, bol1,bol2,bol3;

 char newarr[100];
 int cou = lenth;
 char mnA[100];
 char mnB[100];
 char mnU[] = "abcdefghijklmnopqrstuvwxyz";
 int counter;
 for(int m = 0; m<lenth; m++){
     printf("Символ %d для множини А: ",m);
     scanf("%s", &mnA[m]);
     printf("\n");
     counter = 0;
     for(int n = 0; n<26; n++){
     if (mnA[m] != mnU[n]){
      counter++;
     }
      if(counter == 26){
     printf ("Ви ввели некоректні дані!: '%c' \n", mnA[m]);
     printf ("Введіть символ коректно:");
     scanf("%s", &mnA[m]);

     }
    }
   }
 for(int m = 0; m<lenth; m++){
     printf("Символ %d для множини В: ", m);
     scanf("%s", &mnB[m]);
      printf("\n");
     counter = 0;
     for(int n = 0; n<26; n++){
     if (mnB[m] != mnU[n]){
      counter++;
     }
      if(counter == 26){
     printf ("!!Ви ввели некоректні дані!!: '%c' \n", mnA[m]);
     printf ("Введіть символ коректно:");
     scanf("%s", &mnB[m]);
     printf("\n");
      }
     }
    }printf("Об'єднання множин А i В = {");
    for(int m = 0; m<lenth; m++){
    printf("[%c]  ", mnA[m]);
    newarr[m] = mnA[m];
    }
   for(int x = 0; x<lenth; x++){
        nam = 0;
   for(int y = 0; y<lenth; y++){
        if(mnB[x]!=mnA[y]){
        nam++;
     }
   }
     if(nam == lenth){
        printf("[%c]  ", mnB[x]);
        newarr[cou] = mnB[x];
         cou++;
     }}printf("}\n");

    printf("Булеан новоутвореної множини :{ {пуст мнж} ");
    for(int m = 0; m<cou; m++){

        printf(" {%c}",newarr[m]);
    }

     for(int x = 0; x<cou; x++){
      bol = 1+x;
       for(int y = bol; y<cou; y++){
         if(x != y){
        printf(" {%c, %c}", newarr[x], newarr[y]);
        }}bol++;
     }

         if(cou>3){
    for(int x = 0; x<cou; x++){
     bol = 1 +x;
     bol1 = 2 +x;
       for(int y = bol; y<cou; y++){
         for(int z = bol1; z<cou; z++){
         if(x != y && y != z){
        printf(" {%c, %c, %c}", newarr[x], newarr[y],newarr[z]);
        }}bol++;bol1++;
     }
   }
 }
   if(cou > 4){
   for(int x = 0; x<cou; x++){
     bol = 1 +x;
     bol1 = 2 +x;
     bol2 = 3+x;
       for(int y = bol; y<cou; y++){
         for(int z = bol1; z<cou; z++){
          for(int c = bol2; c<cou; c++){
         if(x != y && y != z && z != c){
        printf(" {%c, %c, %c, %c}", newarr[x], newarr[y],newarr[z],newarr[c]);
        }}bol++;bol1++;bol2++;
     }
   }
 }}
if(cou > 5){
   for(int x = 0; x<cou; x++){
     bol = 1 +x;
     bol1 = 2 +x;
     bol2 = 3+x;
     bol3 = 4+x;
       for(int y = bol; y<cou; y++){
         for(int z = bol1; z<cou; z++){
          for(int c = bol2; c<cou; c++){
           for(int v = bol3; v<cou; v++){
         if(x != y && y != z && z != c && c != v){
        printf(" {%c, %c, %c, %c, %c}", newarr[x], newarr[y],newarr[z],newarr[c],newarr[v]);
        }}bol++;bol1++;bol2++;bol3++;
     }
   }}
 }}
 printf("{");
         for(int x = 0; x<cou; x++){
             printf("%c,",newarr[x]);
         }printf("}");
printf("\n");
 }
