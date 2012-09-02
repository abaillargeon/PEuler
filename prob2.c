#include <stdio.h>

int main(){
	int currentSum = 0;
	int fib[2];
	int c = 0;
	
	fib[0] = 1;
	fib[1] = 2;
	
	while((fib[0] + fib[1]) <= 4000000){
		c = fib[0];
		fib[0] = fib[1];
		fib[1] = c+fib[0];
		printf("%d\n",fib[1]);
		
		if(fib[1] % 2 == 0){
			currentSum += fib[1];
		}
		
	}
	
	
	
	//printf("%d",currentSum);
	
	return 0;
}




