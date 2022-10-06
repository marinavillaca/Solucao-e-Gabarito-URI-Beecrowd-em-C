#include <stdio.h>

	int main(){

		int numC, x,cont=0, contIN=0, contOUT=0;
		scanf("%d", &numC);

		for(int i=1; i<=numC;i++){
			scanf("%d",&x);
			if(x>=10 && x<=20){
				contIN++;
			}
			else{
				contOUT++;
			}
		}
		
		printf("%d in\n", contIN);	
		printf("%d out\n", contOUT);	
		
		return 0;
	}
