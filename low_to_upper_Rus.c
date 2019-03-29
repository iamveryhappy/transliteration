#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[]) {

    if (argc < 2) {
        printf ("Argument must be a char or string:\n");
        return 0;
    }



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
    while (argv[1][j]) {

        /*Каждый четный цикл пишем в буфер. We write in our buffer.
         each iteration, if 'j' is even number*/
        if (j%2 == 0) {
            c[0]=argv[1][j];
            c[1]=argv[1][j+1];

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

    printf ("\n");
}
