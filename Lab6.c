#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main (void) {
   int lenth = 0, lenth2 = 0, counter = 0;
   int a, b;
   char str[255];
   printf("Enter a string : ");
   fgets(str, 255, stdin);
   while(str[lenth] != '\0'){
      lenth++;
   }
   lenth--;

   //lenth of word
   for(int i = 0; i<= lenth; i++){
      if(isalpha(str[i])){
      counter++;
      }else{
            a = i - counter;
            b = i - 1;
         for(int k = 0; k < counter; k++){
            if(str[a] == str[b]){
               lenth2++;
            }
            a++;
            b--;
         }

         if(counter == lenth2){
            for(int k  = 0; k < counter; k++){
               printf("%c", str[k + i - counter]);
            }printf("\n");
         }
      counter = 0;
      lenth2 = 0;}
   }
}
