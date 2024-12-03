#include<stdio.h>

void increasement(int *n);

int main() {
//B1 : xac dinh vi tri can chen
//B2 : Cap phat mang moi (+1)
//B3 : ==== tu vi tri can chen dich chuyen cac phan tu ben phai

	int n = 10;
	increasement(&n);
	printf("Gia tri n %d",n);
	return 0;
	

}

void increasement(int *n){
	(*n)++;
}

