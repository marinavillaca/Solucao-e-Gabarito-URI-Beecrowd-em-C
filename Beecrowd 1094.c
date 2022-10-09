#include <stdio.h>

	int main(){

		int numT, qtd;
		char tipo;
		int total=0, total_r=0, total_s=0, total_c=0;
		scanf("%d", &numT);

		for(int i=1; i<=numT; i++){
			scanf("%d %c", &qtd, &tipo);

			if (tipo=='C'){
				total_c = total_c + qtd;
			}	
			else if(tipo=='R'){
				total_r = total_r + qtd;
			}
			else{
				total_s =total_s+qtd;
			}

		}

		total = total_r + total_c + total_s;

		double perc_c = (double) total_c/total*100;
		double perc_r = (double)total_r/total*100;
		double perc_s = (double)total_s/total*100;

		printf("Total: %d cobaias\n", total);
		printf("Total de coelhos: %d\n", total_c);
		printf("Total de ratos: %d\n", total_r);
		printf("Total de sapos: %d\n", total_s);
		printf("Percentual de coelhos: %.2lf %%\n", perc_c);
		printf("Percentual de ratos: %.2lf %%\n", perc_r);
		printf("Percentual de sapos: %.2lf %%\n", perc_s);
		return 0;
	}
