#include <stdio.h>
#include <math.h>


int main(){
	
	unsigned int i = 20;
	int j = 0;
	int found = 0;

	
	while(1){
		found = 1;
		for(j=0;j<20;j++){
			if(i%(j+1) != 0){
				found = 0;
				break;
			}
		}
		if(found == 1){
			break;
		}
		i+=20;
	}
	
	printf("%d",i);
	

}