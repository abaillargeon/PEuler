#include <stdio.h>
#include <math.h>

int main(){
	
	int i,j;
	int cLargest = 0;


	for(i=100;i<1000;i++){
		for(j=100;j<1000;j++){
			if(checkPal(i*j) == 1 && i*j > cLargest){
				cLargest = i*j;
				//printf("%d\n",i);
			}
		
		}
	}
	printf("%d",cLargest);
	
	

}

int checkPal(int in){
	
	char s[6];
	
	itoa(in,s,10);
	
	if(s[0] == s[5] && s[1] == s[4] && s[2] == s[3]){
		return 1;
	}
	else{
		return 0;
	}
}



