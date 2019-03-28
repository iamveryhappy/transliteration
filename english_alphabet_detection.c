#include <stdio.h>
#include <string.h>

/* Определение английского алфавита по первому символу */

	int main (int argc, char * argv[])


	{
		int i = 0;

			char englowcase[27] = "abcdefghijklmnopqrstuvwxyz";
			char enguppercase[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


		for (i=0; i != strlen(englowcase); i++) {
			if (argv[1][0] == englowcase[i] || argv[1][0] == enguppercase[i]) {
			printf(" English\n");
			return 1;
			}
		}
			printf(" Not English\n");
			return 0;
	}

