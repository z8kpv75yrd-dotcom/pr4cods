#include <stdio.h>

// Берем double, а не float: он точнее, и scanf с %lf читает как раз double
double mv_to_v(double mv){
    const double COF = 1000;
    return mv / COF;
}
int main(void){
    double a;
    printf("Введи милливольты: ");
    // scanf возвращает, сколько значений он прочитал. Если ввели букву
    // или конец ввода (EOF), вернется не 1 и цикл остановится.
    // Без этой проверки на букве программа зациклилась бы, потому что
    // буква так и осталась бы во вводе
    while (scanf("%lf", &a)==1){
        printf("%.2f мВ = %.2f В\n", a, mv_to_v(a));
        printf("Введи милливольты: ");
    }
    return 0;
}