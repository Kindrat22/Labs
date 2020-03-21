#include<stdio.h>
#include <stdlib.h>

int func(int a);

int main(void){
    int counter1 = -1;
    int counter2 = 0;
    int newarray [10][10];
    int array[10][10];
    for(int n = 0; n<10; n++){
        printf("\n");
        for(int m = 0; m<10; m++){
            array[n][m] = rand() %21-10;
            printf("%d  ", array[n][m]);
            array[n][m] = func(array[n][m]);

        }
    }
    printf("\n");
    for(int n = 0; n<10; n++){
        for(int m = 0; m<10; m++){
            if(array[n][m] == 0){
                counter1++;
                for(int k = 0; k<10; k++){
                    array[n][k] = 0;
                     m = 10;

                }
                if(counter2 != 10){
                for(int k = 0; k<10; k++){
                        newarray[9-counter1][k] = array[n][k];

                }
            }else{
                    for(int k = 0; k<10; k++){
                        newarray[counter2][k] = array[n][k];
                        counter2++;

                    }
                }}
        }
    }

for(int n = 0; n<10; n++){
        printf("\n");
        for(int m = 0; m<10; m++){
        printf("%d  ", array[n][m]);
        }
    }
}
int func(int a){
    if(a <0){
        a = 0;
    }
    return a;

}
