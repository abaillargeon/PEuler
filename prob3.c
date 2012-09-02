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
	double upperBound = 600851475143 ;
	int ub = sqrt(upperBound);
	int i = 1;
	int j = 0;
	int currentHighest = 0;
	unsigned int pList[500000];
	unsigned int pFactors[100];
	pList[0] = 2;
	
	
	
	//while(pList[i]<ub){
	while(i<50000){
		pList[i] = findNextPrime(pList[i-1],pList,i);
		if(fmod(upperBound,pList[i]) == 0){
			//currentHighest = pList[i];
			pFactors[j] = pList[i];
			j++;
		}
		if(i%200==0){printf("%d\n",i);}
		i++;


	}
	
	
	
	
	
	for(i=0;i<j;i++){
		printf("%d\n",pFactors[i]);
	}
	
	return 0;
}





