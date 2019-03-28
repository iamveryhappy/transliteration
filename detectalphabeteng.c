#include <stdio.h>
#include <string.h>


/* Определение английского алфавита по первому символу */

	int main (int argc, char * argv[])


	{
		if (argc < 2)
		return -1;

		int i = 0;
		int j = 0;
		int x = 0;

		char englowcase[27] = "abcdefghijklmnopqrstuvwxyz";
		char enguppercase[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("%lu", strlen(argv[1]));

	for (j = 0; j != strlen(argv[1]); j++) {
		for (i = 0; i != strlen(englowcase); i++) {
			x = 0;
			if (argv[1][j] == englowcase[i] || argv[1][0] == enguppercase[i]) {
			printf(" English\n");
			x = 1;
			break;
			}
		}
			if (x == 0) {
			printf(" Not English\n");
	}
}

