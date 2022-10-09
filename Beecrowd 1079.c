#include <stdio.h>

	int main(){

		int numC;
		float valor1,valor2,valor3,media;
		scanf("%d", &numC);
		for(int i=1;i<=numC;i++){
			scanf("%f %f %f", &valor1, &valor2, &valor3);
			media = (valor1*2 +valor2*3 +valor3*5)/(10);
			printf("%.1f\n", media);
		}
				
		return 0;
	}
