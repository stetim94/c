#include <stdio.h>

int main(void){
	int a,*b;
	a = 5;
	b = &a;
	*b = 3;
	printf("%i\n", a);
}
