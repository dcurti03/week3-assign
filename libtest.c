#include <stdio.h>
#include "mylib.h"

int main(void){
	char str[]="This is a test string";
	int len;

	len=cstrlen(str);
	printf("The length is %d\n",len);
	return 0;
}
