#include <stdio.h>
#include <math.h>


int main(){
	
	int i = 0;
	double t = 0;
	double s = 0;
	double q;
	
	for(i=0;i<100;i++){
		t += pow(i+1,2);
		s += (i+1); 
	
	}
	
	q = pow(s,2) - t;
	printf("%f",q);
	

}