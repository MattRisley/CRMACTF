#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int size = 27;
	//Store in heap
	//
	char *str = (char*) malloc(sizeof(char)*size);

	*(str+0) = 'C';
	*(str+1) = 'R';
	*(str+2) = 'M';
	*(str+3) = 'A';
	*(str+4) = 'C';
	*(str+5) = 'T';
	*(str+6) = 'F';
	*(str+7) = '-';
	*(str+8) = '{';
	*(str+9) = 'h';
	*(str+10)= 'i';
	*(str+11)= 'd';
	*(str+12) = 'd';
	*(str+13) = 'e';
	*(str+14) = 'n';
	*(str+15) = '_';
	*(str+16) = 'i';
	*(str+17) = 'n';
	*(str+18) = '_';
	*(str+19) = 'm';
	*(str+20) = 'e';
	*(str+21) = 'm';
	*(str+22) = 'o';
	*(str+23) = 'r';
	*(str+24) = 'y';
	*(str+25) = '}';



	printf("Cookies ...\n");
	printf("Pizza .. .\n");
	printf("No   No ... No\n");
	printf("thin,.k... ts..nk \n");
	printf("\nERRROOROROR --- SHUTTINGDOWN \n");



  	return 0;
}
