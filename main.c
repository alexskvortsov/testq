#include <stdio.h>
#include "test1.h"
include "test2.h"



int main(int arrg, char**argv)
{
	
	printf("Hello world\n\r");
	
	int a = 10;
	int b = 5;
	int num1 = 0, num2 = 0;
	
	num1 = test1fun(a,b);
	num2 = test2fun(a,b);
	
	printf("%d + %d = %d\n\r", a, b, num1);
	printf("%d - %d = %d\n\r", a, b, num2);
	
	int num3 = num1-num2;
	


	return 0;
}
