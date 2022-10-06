#include <stdio.h>

	int main(){

		int num1,num2,soma=0;
		scanf("%d %d", &num1,&num2);

			for(int i=num2+1; i<num1; i++){
				if(i%2!=0){
					soma=soma+i;
				}
			}
			printf("%d\n", soma);	
		
		return 0;
	}
