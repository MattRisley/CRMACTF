#include <stdio.h>
#include <string.h>

 

int main(void){

    	char str[1000];

    	printf("Hello, who do I have the honor of talking to?\n\n");
    	gets(str);

	char* flag  = "CRMACTF-{1t5-9re77y-l0n4ly-1n-h4r4}";

	char* notflag = "hehehe";
	strcmp(flag, notflag);

	printf("\nIt\'s nice to meet you, ");
	puts(str);
	



	

    	return(0);

}

