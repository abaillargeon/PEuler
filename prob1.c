#include <stdio.h>

int main(){
	int upperBound = 1000;
	int i = 0;
	int currentSum = 0;
	
	
	for(i=0;i<upperBound;i++){
		if(i%3 == 0 || i%5 == 0){
			//printf("%s",i);
			currentSum += i;
		}
	}
	
	printf("%d",currentSum);
	
	return 0;
}




