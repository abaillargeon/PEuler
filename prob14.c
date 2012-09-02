#include <stdio.h>
#include <math.h>
#include </sw/include/gmp.h>

/*
No linearization




*/
unsigned int r = 0;
unsigned int t = 0;

void sequence(unsigned int n, int level){
	//printf("%d\n",n);
	level++;
	if(n == 1 || r == 1){
		r = 1;
		t = level;
		return;
	}
	
	if(n%2==0){
		sequence(n/2,level);
	}
	else{
		sequence((3*n)+1,level);
		
	}
	
	
}

int main(){
	int i = 0;
	int starting = 0;
	unsigned int highest = 0;
	
	for(i=1;i<1000000;i++){
		sequence(i,0);
		if(t>highest){
			highest = t;
			starting = i;
		}
		t = 0;
		r = 0;
//		sequence(14,0);
	}
	printf("%d\n",starting);
}

