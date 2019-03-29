#include <stdio.h>
#include <string.h>
#define ENGLOWCASE "abcdefghijklmnopqrstuvwxyz"
#define ENGUPPERCASE  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"


 /*Функция для английского символа*/
	void eng_case (char eng) {

		printf("%c",  eng);

	}


 /*Функция для русской строки*/
	void rus_case (char * rus) {

	 char * rus_low[33] = { "а", "б", "в", "г", "д", "е",
		"ё", "ж", "з", "и", "й", "к", "л", "м", "н",
		"о", "п", "р", "с", "т", "у", "ф", "х", "ц",
		"ч", "ш", "щ", "ь", "ы", "ъ", "э", "ю", "я"
                     };

		
    char * rus_upper[33] = { "А", "Б", "В", "Г", "Д", "Е",
		"Ё", "Ж", "З", "И", "Й", "К", "Л", "М", "Н",
		"О", "П", "Р", "С", "Т", "У", "Ф", "Х", "Ц",
		"Ч", "Ш", "Щ", "Ь", "Ы", "Ъ", "Э", "Ю", "Я"
                     };



         		char c[4]; /*Буфер. Buffer*/
          		int j = 0;
          		int i = 0;


  /*Читаем строку по одному символу до знака конца строки "\0".
  * Here we are reading a string by character till "\0".  */
    while (rus[j]) {


        /*Каждый четный цикл пишем в буфер. We are writing into buffer.
         each iteration, if 'j' is even number*/
       if (j%2 == 0) {
        	  	c[0]=rus[j];
           		c[1]=rus[j+1];


        /*Запишем символ конца строки. We add  symbol of the end of a string.*/
           c[2]='\0';
           i = 0;

            /*Сравним буфер и все строки массива. It compares
            buffer and strings in array*/
            while (i != 33) {

		    
                /*Проверим символ в массиве и напечатаем.
                 * Here we verify a character in the array and print it.*/
                if (strcmp(c, rus_low[i])==0)   {
                    printf ("%s", rus_upper[i]);
                }
                i++;
            }
        }
        j++;
    }
}

	/* Определение английского алфавита по первому символу */

	int main (int argc, char * argv[])


	{
			if (argc < 2)
			return 0;

			int i = 0;
			int j = 0;
			int x = 0; /*Триггер*/


	for (j = 0; j != strlen(argv[1]); j++) {

			x = 0;

		for (i = 0; i != strlen(ENGLOWCASE); i++) {

			if (argv[1][j] == ENGLOWCASE[i] || argv[1][0] == ENGUPPERCASE[i]) {
			eng_case (ENGUPPERCASE[i]);  	/*Если английский символ*/
			x = 1; 			       	/*Установим триггер в 1*/
			break;
			}
		}
			if (x == 0) {           	/*Если триггер равен 0,
							то функция преобразования всей строки*/
			rus_case (argv[1]);
			break;
		}
	}
			printf ("\n");
			return 1;
}

