#include<stdio.h>

int main(){
	int number[5];
	int sum=0;
	printf("Nhap 5 so nguyen bat ky: ");
	
	for(int i=0; i<5; i++){
		printf("so thu %d: ", i+1);
		scanf("%d", &number[i]);
		if(number[i] % 2 != 0){
			sum += number[i];
		}
	}
	printf("Tong so le la: %d\n", sum);
	return 0;
}
