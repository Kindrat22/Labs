#include<stdio.h>
#include<math.h>
int main()
{
//ініціалізую змінні типу дабл:
     double a, b, c, d, i, f, g, h;

//Прошу користувача ввести 2 числа:
     printf("Input 2 nombers \n");

//Зчитую дані з клавіатури:
     printf("1: \n");
       scanf("%lf", &a);
     printf("2: \n");
       scanf("%lf", &b);

//Підставляю числа у форумулу, та виконую математичні дії:
     c = a+b;
     d = pow(c, 4);
     i = pow(a, 4) + 4*pow(a, 3)*b;
     f = 6*a*a*b*b + 4*a*pow(b, 3) + pow(b, 4);
     g = d - i;
     h = g/f;

//Виводжу на екран отримане значення:
     printf("Result: %lf \n", h);

    return 0;
}
