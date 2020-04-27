
#include <stdio.h>
#include <string.h>

 

int main(void){

    	char str[1000];

    	printf("Are you looking for something?\n\n");
    	gets(str);

	char* flag  = "02d6d7d87a9a0846cc219a232b5e06e0148765b9440445538dee5fd2f9e945e5";
	char* notflag = "hehehe";
	strcmp(flag, notflag);

	printf("You\'re gonna have to look harder then that.\n");
	
	
	

    	return(0);

}

