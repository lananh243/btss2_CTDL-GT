#include<stdio.h>

int main() {
	int n,arr[100],k;
	int find = 0;
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
	printf("\n");
	//Nhap phan tu can xoa
	printf("Nhap phan tu can xoa : ");
	scanf("%d",&k);
		
	//	Tim phan tu k va xoa
	for(int i ; i< n;i++){
		if(arr[i] == k){
			find = 1;
			for(int j = i; j< n-1;j++){
				arr[j] = arr[j + 1];
			}
			n--;
			i--;
		}
	}
	 
	if(find){
	 	printf("Mang sau khi xoa phan tu %d là:\n", k);
	        for (int i = 0; i < n; i++) {
	            printf("%d ", arr[i]);
	        }
	        
	    } else {
	        printf("Khong co phan tu %d trong mang \n", k);
	}
	 return 0;
}

