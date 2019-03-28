#include <stdio.h>
#include <string.h>

	char * main (int argc, char * argv[])


	{

	/* Arrays for conversion */
	char  lowcase[27] = "abcdefghijklmnopqrstuvwxyz";
    char  uppercase[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


		if (argc < 2)
		return 0;

		int i = 0;
		int j = 0;

		while (i != strlen(argv[1])) {
			j = 0;
			while (j != strlen(uppercase)) {
				if (argv[1][i] == lowcase[j])
				argv[1][i] = uppercase[j];
				j++;
			}
			i++;
		}

		printf("%s", argv[1]);
		return argv[1];
	}
