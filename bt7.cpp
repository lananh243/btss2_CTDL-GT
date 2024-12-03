#include<stdio.h>

int main() {
	int arr[1000] , n, k;
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
    
    // Nhap gia tri
    printf("\n");
    printf("Nhap gia tri k: ");
    scanf("%d", &k);
    
    printf("Cac cap so co tong bang k la : ",k);
    for(int i=0; i<n;i++){
    	for(int j= i+1;j<n;j++){
    		if(arr[i] + arr[j] == k){
    			printf("%d , %d\n", arr[i], arr[j]);
                find = 1;
			}
		}
	}

    if (!find) {
        printf("Khong co cap so nao co tong bang %d.\n", k);
    }

    return 0;
}

