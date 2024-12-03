#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX][MAX]; 
    int n, l;   
    int max;         
    printf("nhap so luong hang: ");
    scanf("%d", &n);
    printf("nhap so luong cot: ");
    scanf("%d", &l);
    printf("nhap cac gia tri cho mang :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            printf("nhap phan tu thu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
    	for(int j=0;j<l;j++){
    		printf("%d\t",arr[i][j]);
    		
		}
		printf("\n");
	}
		printf("\n");
		 max = arr[0][0]; 
    	for (int j = 0; j < l; j += 2) { 
        	for (int i = 0; i < n; i++) { 
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    
    	printf("\gtri lon nhat la: %d\n", max);
	
	
    
    return 0;
}

