#include <stdio.h>
#include <math.h>
#include </sw/include/gmp.h>

/*
No linearization




*/

int mpow(char* strOut){
	
	mpz_t x, y;
	
	mpz_init_set_str(y, "2", 10);
	
	mpz_pow_ui (y,y,1000);
			
	strncpy(strOut, mpz_get_str(NULL, 10, y), mpz_sizeinbase(y, 10) + 2);
	
	return mpz_sizeinbase(y, 10);
	
}



int main(){
	mpz_t x,y,tot;
	int i = 2;
	mpz_init_set_str(x, "1", 10);
	mpz_init_set_str(y, "1", 10);
	mpz_init_set_str(tot, "0", 10);
	while(mpz_sizeinbase(x,10) < 1000){
		mpz_add(tot,x,y);
		mpz_set(x,y);
		mpz_set(y,tot);
		printf("%d   %s\n",i,mpz_get_str(NULL,10,x));
		i++;
	}

	
}

