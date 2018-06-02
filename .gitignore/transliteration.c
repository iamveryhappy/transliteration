/*Эта рограмма транслитерирует символы
Пользователю предлагается самостоятельно определить алфавит. Transliteration Russian to Latin*/
#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[]) {
    /*here we check arguments*/
    if (argc < 2) {
        printf ("Argument must be a char or string:\n");
        return 0;
    }

    char * eng[33] = { "a", "b", "c" , "d", "e", "f", "g",
                       "h", "i", "j", "k", "l", "m", "n", "o", "p",
                       "r","s", "t", "u", "v",   "y", "z", "sh",  "sh'",
                       "ch","y", "e", "iu", "ya", "'", "j", "j"
                     };
    char * rus[33] = { "а",  "б",  "ц", "д", "е", "ф", "г",
                       "х",  "и", "ж", "к", "л", "м", "н", "о", "п",
                       "р", "с", "т", "у", "в",   "й", "з",  "ш",
                       "щ", "ч", "ы", "э", "ю", "я", "ь", "ъ", "ж"
                     };



    char c[4]; /*Буфер. Buffer*/
    int j = 0;
    int i = 0;

    while (argv[1][j] != '\0') {
        /*Каждый четный цикл пишем в буфер. We write in the buffer
         each iteration, if 'j' is even number*/
        if (j%2 == 0) {
            c[0]=argv[1][j];
            c[1]=argv[1][j+1];
            c[2]='\0';
            i = 0;
            /*Сравним буфер и все строки массива. It compares
             buffer and strings in array*/
            while (i != 33) {
                if (strcmp(c, rus[i])==0)   {
                    printf ("%s", eng[i]);
                }
                i++;
            }

        }
        j++;

    }

    printf ("\n", eng[i]);
}


