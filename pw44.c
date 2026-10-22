#include <stdio.h>

int main(void){
    int N;
    int i = 1;
    double x;
    double S = 0;
    printf("Введи N: ");
    if (scanf("%d", &N)!=1 || N<=0){
        printf("Введи положительное число!\n");
        return 1;
    }
    // S копим через +=, потому что каждое новое число надо добавить
    // к тому, что уже накопилось (S = S + x). Начинаем с 0.
    // Для произведения брали бы *= и начинали с 1
    while (i<=N){
        printf("Число %d: ", i);
        if (scanf("%lf", &x)!=1){
            printf("Это не число!\n");
            return 1;
        }
        if (x>0){
            S += x;
        }
        i++;
    }
    printf("Сумма положительных: %.6f\n", S);
    return 0;
}