#include<stdio.h>
#define MAX 100
int main(){
	int arr[MAX];
	int answer;
	int n;
	printf("nhap so hoc sinh: ");
			scanf("%d",&n);
			if(n<1 || n>MAX){
				printf("ko hop le");
				return 1;
			}
			for(int i=0;i<n;i++){
				printf("nhap so diem mon Dia cho hoc sinh thu %d : ",i+1);
				scanf("%d",&arr[i]);
				printf("\n");
		}
		int total=0,tb;
		for(int i=0;i<n;i++){
			total=total+arr[i];
		}
		tb=total/n;
		printf("diem trung binh mon Dia cua tat ca hoc sinh la : %d\n",tb);
		printf("trong do so hoc sinh co diem thap nhat la: \n");
		for(int i=0;i<n;i++){
			if(arr[i]<=5){
				printf("%d\t",arr[i]);
			}
		}

 return 0;
 }

