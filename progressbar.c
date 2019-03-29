#include <stdio.h>

	int main () {

	int i;

	for(i = 0; i < 100; i++)

	{

   printf("= %d", i);
   printf("\r");
   fflush(stdout);
   sleep(1);

	}
}
