#include<stdio.h>

int main() {
	int n;
	int arr[100];
	//	Nhap so luong phan tu
	printf("Nhap vao so phan tu cua mang : ");
	scanf("%d",&n);
	//Kiem tra dk
	if(n <= 0 || n > 100){
		printf("So phan tu ko hop le \n");
		return 0;
	}
	
	//Nhap so phan tu mang
	printf("Nhap vao cac phan tu cua mang : ");
	for(int i =0; i<n;i++){
		printf("arr[%d] = ", i);
		scanf("%d",&arr[i]);
	}
	int max = arr[0];
	//Tim phan tu lon nhat
	for(int i = 0; i< n;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}

	//In ra phan tu lon nhat
	printf("Phan tu lon nhat trong mang la : %d\n",max);
}

