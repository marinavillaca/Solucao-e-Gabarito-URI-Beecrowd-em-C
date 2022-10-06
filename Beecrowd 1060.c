#include <stdio.h>
	int main(){

		float num; 
		int cont = 0;
		
		for (int i=1; i<=6; i++){
			scanf("%f", &num);
	
			if(num>0)
				cont++;
		}
		printf("%d valores positivos\n", cont);

	return 0;
	}
