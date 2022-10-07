#include <stdio.h>

	int main(){

		int qtd=0, num,i=1;
		scanf("%d", &qtd);

		for(i=1;i<=qtd;i++){
			scanf("%d", &num);

			if(num%2==0 && num>0){
				printf ("EVEN POSITIVE\n");
			}
			else if(num%2==0 && num<0){
				printf ("EVEN NEGATIVE\n");				
			}
		
			else if(num%2!=0 && num<0){
				printf ("ODD NEGATIVE\n");
			}			
			else if(num%2!=0 && num>0){
				printf ("ODD POSITIVE\n");
			}
			else{
				printf ("NULL\n");
			}
		}
				
		return 0;
	}
