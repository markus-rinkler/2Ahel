#include <stdio.h>

int main()
{
    const char secret []= "REDBULL4EVER";
    const int len = sizeof(secret)-1;
    char guessed[len];
    char guess;


    // variable inizialisieren _ _ _ _

    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }


    printf("Buchstabe eingeben:");
    if ( scanf(" %c", &guess) != 1) {
        printf("Fehler\n");
        return 1;
    }

    if (secret[0] == guess) {
        printf("Treffer %c\n", secret[0]);
    }

    int hits = 0;
    for (int i = 0; i < len; i++) {
        if (secret[i] == guess) {
            hits++;
            guessed[i] = guess;
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%c ", guessed[i]);
    }
    printf("\n");

    printf("Anzahl Treffer: %d\n", hits);

    return 0;
}

