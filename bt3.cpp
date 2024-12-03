#include<stdio.h>

int main() {
	int n, arr[100] ;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	
	//Kiem tra dk
	if(n <= 0 || n > 100){
		printf("So phan tu ko hop le \n");
		return 0;
	}
	
	printf("Nhap cac phan tu cua mang : \n");
	for(int i = 0; i < n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
		
	} 
	
	//In ra mang dao nguoc 
	printf("Mang dao nguoc la : ");
	for(int i = n-1; i >= 0; i--){
		printf("%d \n", arr[i]);
	}
	return 0;
}

