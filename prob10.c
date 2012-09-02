#include <stdio.h>
#include <math.h>

double findNextPrime(double start, unsigned int *primeList, int primeLocation){
	double ret = start;
	int j = 0;
	int found = 0;
	
	while(1){
		ret += 1;
		found = 1;
		/*for(j=2;j<ret;j++){
			if(fmod(ret,j) == 0){
				found = 0;
				break;
			}
		}*/
		for(j=0;j<primeLocation;j++){
			if(fmod(ret,primeList[j]) == 0){
				found = 0;
				break;
			}
		}
		if(found == 1){
			break;
		}
	}
	

	return ret;
}


int main(){
	//double upperBound = 13195;
	double upperBound = 2000000 ;
	double cSum = 0;
	int i = 1;
	int j = 0;
	int currentHighest = 0;
	unsigned int pList[500000];
	pList[0] = 2;
	
	
	
	//while(pList[i]<ub){
	while(pList[i-1]<upperBound){
		pList[i] = findNextPrime(pList[i-1],pList,i);
		if(i%200==0){printf("%d\n",pList[i]);}
		i++;

	}
	
	
	
	
	
	for(j=0;j<i-1;j++){
		cSum += pList[j];
	}
	
	printf("%f\n",cSum);
	
	return 0;
}





