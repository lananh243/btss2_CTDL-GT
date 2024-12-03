#include <stdio.h>
#include <stdlib.h>

void insertElementArray(int **pArray, int *n, int position, int value);
void removeElementArray(int **pArray, int *n, int position);

int main() {
    int n;
    int *pArray = NULL;
    int position, value;

    // Nhập n
    printf("Moi ban nhap vao so phan tu cua mang: ");
    scanf("%d", &n);

    // Cấp phát bộ nhớ động
    pArray = (int*) malloc(n * sizeof(int));

    // Nhập giá trị cho các phần tử mảng
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", pArray + i);
    }

    // In ra các giá trị
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, pArray[i]);
    }

    // Nhập vị trí và giá trị cần chèn
    printf("Nhap vao vi tri can chen: ");
    scanf("%d", &position);
    printf("Nhap vao gia tri can chen: ");
    scanf("%d", &value);
    
    insertElementArray(&pArray, &n, position, value);
    printf("\nSau khi chen:\n");
    
    // In ra các giá trị
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, pArray[i]);
    }

    // Nhập vị trí cần xóa
    printf("Nhap vao vi tri can xoa: ");
    scanf("%d", &position);
    
    removeElementArray(&pArray, &n, position);
    printf("\nSau khi xoa:\n");
    
    // In ra các giá trị
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, pArray[i]);
    }

    // Giải phóng bộ nhớ
    free(pArray);
    return 0;
}

// Triển khai hàm thêm mới phần tử
void insertElementArray(int **pArray, int *n, int position, int value) {
    if (position < 0 || position > *n) {
        printf("Vi tri can chen khong hop le\n");
        return;
    }
    // Cấp phát mới
    *pArray = (int*) realloc(*pArray, (*n + 1) * sizeof(int));

    for (int i = *n; i > position; i--) {
        (*pArray)[i] = (*pArray)[i - 1];
    }
    (*pArray)[position] = value;
    (*n)++;
}

// Triển khai hàm xóa phần tử
void removeElementArray(int **pArray, int *n, int position) {
    if (position < 0 || position >= *n) {
        printf("Vi tri can xoa khong hop le\n");
        return;
    }

    for (int i = position; i < *n - 1; i++) {
        (*pArray)[i] = (*pArray)[i + 1];
    }
    
    // Cấp phát lại bộ nhớ
    *pArray = (int*) realloc(*pArray, (*n - 1) * sizeof(int));
    (*n)--;
}
