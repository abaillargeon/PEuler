#include <stdio.h>
#include <math.h>
#include </sw/include/gmp.h>


int main(){


	mpz_t t;
	int n = 1;
	int factors = 0;
	
	mpz_init_set_str(t,"17766",10);
	
	factors = countFactors(t);
	//printf("%s %d \n",mpz_get_str(NULL,10,t),factors);
	
	
	
	//return 0;
		
	while(factors <= 500){
		n++;
		//mpz_pow_ui()
		mpz_set_ui(t,((pow(n,2)+n)/2));
		//printf("%s %d \n",mpz_get_str(NULL,10,t),factors);
		factors = countFactors(t);

	}

	printf("%f %d",((pow(n,2)+n)/2),factors);

	
	
}

int countFactors(mpz_t n){
	int nf = 0;
	int i = 0;
	int j = 0;
	int powers[999];
	int sum = 1;
	
	mpz_t p;
	mpz_t r;
	mpz_t d;
	
	mpz_init_set(d,n);
	mpz_init_set_str(p,"2",10);
	mpz_init_set_str(r,"1",10);
	
	while(mpz_cmp_ui(d,1) != 0){
		//printf("%s\n",mpz_get_str(NULL, 10, n));
		mpz_mod(r,d,p);//n%p ---> r
		if(mpz_cmp_ui(r,0) == 0){ //If r==0
			powers[j] = mpz_remove(d,d,p);//Remove all of the factor
			//printf("%s\n",mpz_get_str(NULL, 10, n));
			j++;
		}
		
		mpz_nextprime(p,p);
		
		//i++;
	}
	
	for(i=0;i<j;i++){
		if(powers[i] >= 1){
			powers[i] = powers[i]+1;
			sum *= powers[i];
		}
	}
	
	//printf("%d",sum);
	

	return sum;
}