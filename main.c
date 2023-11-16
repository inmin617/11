#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	
	int i=4;
	
	int* pi = &i;
	char* pc = (char *)pi;
	
	printf("%i, %i, %i\n", i, *pi, *pc);
	
	system("PAUSE");
	return 0;
	
}
