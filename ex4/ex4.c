/**Valgrind example**/

/*This program is wrong on purpose*/

#include <stdio.h>

int main()
{	
	int age = 10;
	int height = 55;

	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height);

	return 0;
}
