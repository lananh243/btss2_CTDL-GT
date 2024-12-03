#include<stdio.h>

int main() {
	int arr[100] , n , number;
	int count = 0;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	
	//Kiem tra dk
	if(n <= 0 || n > 100){
		printf("So phan tu ko hop le \n");
		return 0;
	}
	
	printf("Nhap cac phan tu cua mang : ");
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
		
	} 
	printf("Nhap phan tu can tim so lan xuat hien : ");
	scanf("%d", &number);
	
	//Tim so lan xuat hien
	for(int i=0; i<n; i++){
		if(arr[i] == number) {
			count ++;
		}
	}
	printf("So lan xuat hien cua phan tu %d trong mang : %d\n",number,count);
	return 0;
}

