#include <stdio.h>

	int main(){

		int num, maior=0, posicao=0;

		for(int i=1;i<=100;i++){
			scanf("%d", &num);
		
				if(num>maior){
					maior = num;
					posicao = i;
				}
		}

		printf("%d\n%d\n", maior, posicao);	
		return 0;
	}

