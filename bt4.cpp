#include<stdio.h>

int main() {
	int n, arr[100];
	
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	
	//Kiem tra dk
	if(n <= 0 || n > 100){
		printf("So phan tu ko hop le \n");
		return 0;
	}
	
	//nhap vao cac phan tu cua mang
    for(int i=0; i< n; i++)
    {
        printf("Nhap arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    
    printf("Mang sau khi nhap la:\n");
    //hien thi mang ra man hinh
    for(int i=0; i< n; i++)
    {
        printf("%d \t",arr[i]);
    }
	    
	//    Sap xep
	for(int i = 0; i < n-1 ; i++){
		for(int j = i+1; j <n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp; 
			}
		}
	}
	
	printf("\nMang sau khi sap xep la:\n");
    //hien thi mang sap xep ra man hinh
    for(int i=0; i< n; i++)
    {
        printf("%d \t",arr[i]);
    }

}

