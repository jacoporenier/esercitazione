#include <stdio.h>
#include <stdlib.h>


int main(void){
	int v[10]={20, 2, 3, 4, 5, 6, 7, 8, 12, 7};
	int max;
	int i=0;
	for (i=0; i<10; i++){
		printf("%d: ", i+1);
		printf("%d\n", v[i]);
	}
	for (i=0; i<10; i++){
		if (v[i]>max){
			max = v[i];
		}
	}
	
	printf("max: %d", max);
}
