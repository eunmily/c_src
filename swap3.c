#include <stdio.h>

int a;
int b;

void swap(void){ //no return
	int tmp = a;
	a = b;
	b = tmp;
}

int main(void)
{
	a = 100;
	b = 200;
	
	printf("a : %d\tb : %d\n", a, b);

	swap();
	
	printf("a : %d\tb : %d\n", a, b);
	
	return 0;
}
