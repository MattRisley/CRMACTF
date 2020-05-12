#include <stdio.h>
#include <string.h>

#define HIDE_LETTER(a) (a) + 0x50
#define UNHIDE_STRING(str) do { char * ptr = str ; while (*ptr) *ptr++ -= 0x50; } while(0)

int main(void){
	
	char* str = "flag";

	char flag[]= {HIDE_LETTER('C'),HIDE_LETTER('R'),HIDE_LETTER('M'),HIDE_LETTER('A'),
		HIDE_LETTER('C'),HIDE_LETTER('T'),HIDE_LETTER('F'),HIDE_LETTER('{'),
		HIDE_LETTER('g'),HIDE_LETTER('w'),HIDE_LETTER('i'),HIDE_LETTER('z'),
		HIDE_LETTER('t'),HIDE_LETTER('h'),HIDE_LETTER('a'),HIDE_LETTER('t'),
		HIDE_LETTER('w'),HIDE_LETTER('a'),HIDE_LETTER('s'),HIDE_LETTER('b'),
		HIDE_LETTER('l'),HIDE_LETTER('u'),HIDE_LETTER('r'),HIDE_LETTER('r'),
		HIDE_LETTER('y'),HIDE_LETTER('}'), '\0'};

	printf("-------------- S---t----a-----t---i---c -------------\n");
	printf("-----------------------------------------------------\n");


	//UNHIDE_STRING(flag);
	//printf("testing %s", flag);
	return 0;
}
