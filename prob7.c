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
	int highest = 10000;
	unsigned int pList[10001];
	int i = 1;
	pList[0] = 2;
	
	while(i<=highest){
		pList[i] = findNextPrime(pList[i-1],pList,i);
		i++;
	}
	
	
	
	
	//for(i=0;i<highest;i++){
		printf("%d\n",pList[10000]);
	//}

	
	return 0;
}





