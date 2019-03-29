#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Определение английского алфавита по первому символу */

	int main (int argc, char * argv[])


	{
		if (argc < 2)
		return -1;
		char third[512];
		int i = 0;
		int j = 0;
		int x = 0;

		char englowcase[27] = "abcdefghijklmnopqrstuvwxyz";
		char enguppercase[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (j = 0; j != strlen(argv[1]); j++) {
		for (i = 0; i != strlen(englowcase); i++) {
			x = 0;
			if (argv[1][j] == englowcase[i] || argv[1][0] == enguppercase[i]) {

			printf("%c", enguppercase[i]);
			//printf(" English\n");
			x = 1;
			break;
			}
		}
			if (x == 0) {
			snprintf(third, 512, "./rus_low_to_uppercase.o %s", argv[1]);
			system(third);
			//printf(" Not English\n");
			break;
		}
	}
}

