#include <stdio.h>
#include <math.h>
#include </sw/include/gmp.h>



int findValue(char* n){
	int i;
	int val = 0;
	
	for(i=0;i<15;i++){
		if(n[i] >= 65 && n[i] <= 90){
			//printf("%c",n[i]);
			val += n[i]-64;
		}
	}

	return val;
}

int main(){
	int t;
	int nameCount = 0;
	int j = 0;
	int s = 0;
	int i = 0;
	char *words[5300];
	char *tempWord = NULL;
	char buffer[15];
	mpz_t sum;
	mpz_init_set_str(sum, "0", 10);
	
	FILE *fp = fopen("/names.txt", "r");
	
	while((t = fgetc(fp)) != EOF){
		//34 "
		//44 ,
		if(t == 44){
			words[nameCount] = (char*)malloc(15);
			strcpy(words[nameCount],buffer);
			strcpy(buffer,"           ");
			j = 0;
			nameCount++;			
		}
		else if(t != 34){
			buffer[j] = t;
			j++;
		}
	}

	while(s!=1){
		s = 1;
		for(i=0;i<nameCount-1;i++){
			if(strcmp(words[i],words[i+1]) > 0){
				s = 0;
				tempWord = words[i];
				words[i] = words[i+1];
				words[i+1] = tempWord;
			}
		}
	
	}
	
	
	for(i=0;i<nameCount;i++){
		mpz_add_ui(sum,sum,(i+1)*findValue(words[i]));
		
		printf("%d %s   %d   %s\n",i,words[i],findValue(words[i]),mpz_get_str(NULL, 10, sum));

	}
	
	
	
}

