#include <stdio.h>

	int main(){

		int num,cont=0;
		scanf("%d", &num);

		for(int i=num;;i++){
			
			if(i%2!=0){
				cont++;
				printf("%d\n", i);

				if(cont==6){
					break;
				}
			}
		}
		return 0;
	}
