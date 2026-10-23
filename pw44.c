#include <stdio.h>
int main(void){
    int N;
    int i = 1;
    double x;
    double S = 0;
    printf("Введи N: ");
    printf("Введи N: ");
while (scanf("%d", &N)!=1 || N<=0){
    scanf("%*[^\n]");
    printf("Введи положительное число!\n");
    printf("Введи N: ");}
    // S копим через +=, потому что каждое новое число надо добавить
    // к тому, что уже накопилось (S = S + x). Начинаем с 0.
    // Для произведения брали бы *= и начинали с 1
    while (i<=N){
        printf("Число %d: ", i);
        printf("Число %d: ", i);
while (scanf("%lf", &x)!=1){
    scanf("%*[^\n]");
    printf("Это не число!\n");
    printf("Число %d: ", i);}
        while (x>0){
    S += x;
    x = 0;}
    printf("Сумма положительных: %.6f\n", S);
    return 0;
}
