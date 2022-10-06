#include <stdio.h>

	int main(){

		int num;
		int cont_par=0, cont_impar=0, cont_p=0, cont_n=0;

		for(int i=1;i<=5;i++){
			scanf("%d", &num);


		{	if(num%2==0){
				cont_par++;
			}
			else{
				cont_impar++;
			}
		}

		{	if(num>0){
				cont_p++;
			}
			if(num<0){
				cont_n++;
			}
		}

		}

		printf("%d valor(es) par(es)\n", cont_par);
		printf("%d valor(es) impar(es)\n", cont_impar);
		printf("%d valor(es) positivo(s)\n", cont_p);
		printf("%d valor(es) negativo(s)\n", cont_n);

		return 0;
	}
