#include<stdio.h>
#include<stdlib.h>
int main(){
//	mang dong
	int n;
	int *pArray=NULL;
//	nhap n
	printf("moi ban nhap vao so phan tu mang \n");
	scanf("%d", &n);
//	cap nhat bo nho dong
	pArray = (int*) malloc(n * sizeof(int));
	
////	mhap phan tu dau tien
//	printf("nhap phan tu dau mang dong");
//	scanf("%d",&pArray[0]);
//	printf("phan tu dau tien co gia tri la %d", pArray[0]);
	
	for(int i =0; i<n; i++){
		printf("arr[%d]=",i);
		scanf("%d",pArray+i);
	}
	
//	in gia tri
	for(int i=0; i<n; i++){
		printf("arr[%d]=%d \n",i,*pArray+i);
	}
	
	return 0;
	
}
