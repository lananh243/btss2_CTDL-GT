#include<stdio.h>

int main() {
	int arr1[1000] , arr2[1000], n, m;
	int index = 0;
	int arr[2000];
	printf("Nhap so phan tu cua mang thu nhat : ");
	scanf("%d",&n);
	//Kiem tra dk
	if(n <= 0 || n > 1000){
		printf("So phan tu ko hop le \n");
		return 0;
	}
	//nhap vao cac phan tu cua mang
    for(int i=0; i< n; i++)
    {
        printf("Nhap arr1[%d] = ",i);
        scanf("%d", &arr1[i]);
    }
    
    printf("Mang sau khi nhap la:\n");
    //hien thi mang ra man hinh
    for(int i=0; i< n; i++)
    {
        printf("%d \t",arr1[i]);
    }


	//Mang thu 2
	printf("\n");
	printf("Nhap so phan tu cua mang thu hai : ");
	scanf("%d",&m);
	
	//Kiem tra dk
	if(m <= 0 || m > 1000){
		printf("So phan tu ko hop le \n");
		return 0;
	}
	
	//nhap vao cac phan tu cua mang
    for(int i=0; i< m; i++)
    {
        printf("Nhap arr2[%d] = ",i);
        scanf("%d", &arr2[i]);
    }
    
    printf("Mang sau khi nhap la:\n");
    //hien thi mang ra man hinh
    for(int i=0; i< m; i++)
    {
        printf("%d \t",arr2[i]);
    }
    
    //Gop mang
    
    for(int i=0; i < n; i++){
    	arr[index] = arr1[i];
    	index++;
	}
	
	for(int i=0; i < m; i++){
		arr[index] = arr2[i];
		index++;
	}
	
	// In ra ket qua
	printf("\n");
    printf("Mang sau khi gop la :\n");
    for (int i = 0; i < index; i++) {
        printf("%d \t", arr[i]);
    }
    return 0; 
}

