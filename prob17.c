#include <stdio.h>
#include <math.h>

	
int numbers[] = {0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};//one,two,three,etc eleven,twelve, thirteen, fourteen, fifteen, sixteen, seventeen, eighteen, nineteen
int tens[] = {0,3,6,6,5,5,5,7,6,6};//0, ten, twenty,thirty,forty,fifty,sixty,seventy,eighty,ninety
int h = 7;//hundred

int main(){

	
	int j,i;
	j=0;
	
	for(i=1;i<1001;i++){
		j += findLength(i);		
	}

	printf("%d\n",j);
	
	//printf("%d\n",findLength());
	
	//onehundred
	//onehundredandthirtyfour
	//sevenhundredandseventyseven
	//ninehundredandninetynine
	//threehundredandfifty
	//threehundredandfortytwo
}

int findLength(int n){
	int thou = 0;
	int hun = 0;
	int ten = 0;
	int one = 0;
	int ands = 0;
	
	if(n==1000){
		thou = 11;//one thousand
	}
	n = n%1000;
	if(n/100 > 0){
		hun = numbers[n/100]+h;
	}
	n = n%100;
	if(n/10 > 1){
		ten = tens[n/10];
		n = n%10;
	}
	if(n > 0){
		one = numbers[n];
	}
	
	if(hun > 0 && (ten > 0 || one > 0)){
		ands = 3;
	}
	//printf("%d %d %d %d %d \n\n",thou, hun,ten,one,ands);
	return thou+hun+ten+one+ands;
}