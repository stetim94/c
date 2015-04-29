#include <stdio.h>
#include <stdlib.h>

void swap(int *c,int *d);
int multiply(int c,int d);
int factorial(int c, int d);

int main(void){
  char buf[BUFSIZ];
  char *p;
  int a,b;
  do {
    printf ("Enter a int: ");
    if (fgets(buf, sizeof(buf), stdin) != NULL){
      a = strtol(buf, &p, 10);
    }
  } while(!(buf[0] != '\n' && (*p == '\n' || *p == '\0')));
  do {
    printf ("Enter your second int: ");
    if (fgets(buf, sizeof(buf), stdin) != NULL){
      b = strtol(buf, &p, 10);
    }
  } while(!(buf[0] != '\n' && (*p == '\n' || *p == '\0')));
  printf("You entered: %i and %i\n", a,b);
  printf("the factorial of the two number is: %i\n", factorial(a,b));
  printf("%s\n", "swapping numbers");
  swap(&a,&b);
  printf("now the fatorial is %i\n", factorial(a,b));
  return(0);
}

void swap(int *c,int *d){
	// c and d are memory adresses
	// whatever value (*) is at c, store it in temp
	int temp = *c;
	// store whatever value is at d, into c location
	*c = *d;
	// give the number stored in temp to d location
	*d = temp;
}
int multiply(int c,int d){
  return c*d;
}
int factorial(int c,int d){
  int i;
  int e = c;
  for (i = 1; i < d; i++){
    c *= e;
  }
  return c;
}