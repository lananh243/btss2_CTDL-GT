#include<stdio.h>

#include <stdio.h>

int main() {
    // Khai b�o m?ng 1 chi?u
    int array[5];
    
    // Khai b�o v� g�n gi� tr?
    int arrayInit[] = {1, 3, 4};
    
    // Truy c?p v�o ph?n t? th�ng qua ch? m?c (index)
    printf("Nhap gia tri cho array[0]: ");
    scanf("%d", &array[0]);

    // In ra gi� tr? ph?n t? d?u ti�n trong m?ng array
    printf("Gia tri phan tu dau tien: %d\n", array[0]);

    return 0;
}

