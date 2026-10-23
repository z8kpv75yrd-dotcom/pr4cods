#include <stdio.h>
#include <stdint.h>
#define MAXU 65535
int main(void){
     int p1, p2;
     uint16_t w, h;
     float res;
     printf("Введи w и h (от 0 до 65535): ");
     if (scanf("%d %d", &p1, &p2)!=2 || p1<0 || p1>MAXU || p2<0 || p2>MAXU){
        printf("Введи 2 числа от 0 до 65535!\n");
        return 1;}
    w = (uint16_t)p1;
    h = (uint16_t)p2;
    // (float) нужен, чтобы деление было дробным. Без него w * h и 10000
    // были бы целыми числами и дробная часть пропала бы
    // (250 * 100 / 10000 дало бы 2, а надо 2.5)
    res = (float)(w * h) / 10000;
    printf("Результат: %f\n", res);
    printf("uint16_t: %llu\n", (unsigned long long)sizeof(uint16_t));
    printf("int: %llu\n", (unsigned long long)sizeof(int));
    printf("float: %llu\n", (unsigned long long)sizeof(float));
    return 0;
}
