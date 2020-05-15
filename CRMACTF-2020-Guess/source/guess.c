#include <stdio.h>
#include <string.h>
 

int main(void){

    	char flag[32];
	char realFlag[32];
	
    	printf("I bet you can't guess the flag ;)\n\n");
    	gets(flag);
	printf("\n");

	strncpy(realFlag, "CRMACTF-{y4u-@r4-@-g00d-6u4ss4r}",32);


	if ( 0 == strncmp(flag, realFlag, 32)){
		printf("Woah Woah you can\'t do that! But hey, a  game is a game, here you are...\n ");
		printf("%s\n", realFlag);

	}else{

		printf("Sorry, try again.\n");
	
	}
	



	

    	return(0);

}

