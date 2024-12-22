#include<stdio.h>

int main(){
	int number[5];
	int sochan=0, sole=0;
	
	for(int i=0; i<5; i++){
		printf("so thu %d", i+1);
		scanf("%d", &number[i]);
		if(number[i] % 2 == 0){
			sochan++;
		}else{
			sole++;
		}
	}
	printf("Cac so le la:%d\n", sole);
	printf("cac so chan la:%d\n", sochan);
	return 0;
}
