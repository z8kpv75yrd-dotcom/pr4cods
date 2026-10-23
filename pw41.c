#include <stdio.h>
#define KOF 7 // в неделе 7 дней
int main(void){
    int a, b, c;
    printf("Введи кол-во дней: ");
    while (scanf("%d", &a)==1 && a>0){
        // a и KOF оба int, поэтому деление целочисленное и дробная часть
        // просто отбрасывается (15 / 7 будет 2, а не 2.14).
        // Остаток дней берем через %
        b = a / KOF;
        c = a % KOF;
        printf("%d нед %d дн\n", b, c);
        printf("Введи кол-во дней: ");}
    return 0;
}
