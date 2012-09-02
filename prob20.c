#include <stdio.h>
#include <math.h>
#include </sw/include/gmp.h>

/*
No linearization




*/
int factorial(int n, char* strOut){
	
	mpz_t x, y;
	int i;
	
	mpz_init_set_str(y, "1", 10);
	
	for(i=0;i<n;i++){
		//mpz_init_set_ui(x, i);
		mpz_mul_ui (y,y,i+1);
		
	}
	
	strncpy(strOut, mpz_get_str(NULL, 10, y), mpz_sizeinbase(y, 10) + 2);
	
	return mpz_sizeinbase(y, 10);
	
	
}

int mpow(char* strOut){
	
	mpz_t x, y;
	
	mpz_init_set_str(y, "2", 10);
	
	mpz_pow_ui (y,y,1000);
			
	strncpy(strOut, mpz_get_str(NULL, 10, y), mpz_sizeinbase(y, 10) + 2);
	
	return mpz_sizeinbase(y, 10);
	
}

int addString(char* s, int l){
	
	int i, sum;
	sum = 0;
	
	for(i=0;i<l;i++){
		if(s[i] != '0'){
			sum += s[i]-'0';
		}
		//printf("%c\n",s[i]);
		
	}
	
	printf("%d\n",sum);
	return sum;
	
}



int main(){
	char str[1000];
	int res = 0;
	int l = 0;
	//l = factorial(100, str);
	l = mpow(str);
	res = addString(str, l);
}

