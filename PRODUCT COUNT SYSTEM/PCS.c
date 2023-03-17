#include <stdio.h>

int main(void)
{
	int product;

	product = 3;
	printf("  STEP   PRODUCT \n");
	printf("  1         %d \n", product);

	while( product <=100 ) {
		printf("  2       TRUE \n");
		product = 3* product;
		printf("  2.1       %d \n", product);
	}
	printf("  3       FALSE \n\n");

	return 0;
}