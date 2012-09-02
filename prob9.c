#include <stdio.h>
#include <math.h>


int main(){
	

	
	int i,j,k;
	
	for(i=1;i<1000;i++){
		for(j=1;j<1000;j++){
			for(k=1;k<1000;k++){
				
				if(i+j+k == 1000 && (pow(i,2) + pow(j,2) == pow(k,2))){
					printf("%d %d %d \n",i,j,k);
					
				
				}
				
			}
		}
	}
	
	
	
//	printf("%f",q);
	

}