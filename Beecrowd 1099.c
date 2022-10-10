#include <stdio.h>

	int main(){

		int q_testes, numX, numY, cont=0;
		scanf("%d", &q_testes);

		for(int i=1; i<=q_testes; i++){
			scanf("%d %d", &numX, &numY);

			cont = 0;
			if(numX>numY){
				for(int j=numY+1; j<numX; j++){
					if(j%2!=0){
						cont = cont + j;
					}
				}
			printf("%d\n", cont);				
			}

			if (numX<numY){
				for(int j=numX+1; j<numY; j++){
					if(j%2!=0){
						cont = cont + j;
					}
				}
			printf("%d\n", cont);				
			}

			if (numX==numY){
				printf("%d\n", cont);	
			}
		}

		return 0;
	}
