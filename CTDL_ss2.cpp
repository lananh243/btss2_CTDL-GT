#include<stdio.h>

#include <stdio.h>

int main() {
    // Khai báo m?ng 1 chi?u
    int array[5];
    
    // Khai báo và gán giá tr?
    int arrayInit[] = {1, 3, 4};
    
    // Truy c?p vào ph?n t? thông qua ch? m?c (index)
    printf("Nhap gia tri cho array[0]: ");
    scanf("%d", &array[0]);

    // In ra giá tr? ph?n t? d?u tiên trong m?ng array
    printf("Gia tri phan tu dau tien: %d\n", array[0]);

    return 0;
}

