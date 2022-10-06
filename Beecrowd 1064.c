#include <stdio.h>
	int main(){
		float num, media=0,soma=0;
		int cont=0;

		for(int i=1;i<=6;i++){
			scanf("%f",&num);

			if(num>0){
				cont++;
				soma=soma+num;
			}
		}

		media = soma/cont;
		printf ("%d valores positivos\n", cont);
		printf("%.1f\n", media);

		return 0;
	}
