#include <stdio.h>

int main()
{
    const char secret []= "REDBULL4EVER";
    char guess;

    printf("Buchstabe eingeben:");
    if ( scanf(" %c", &guess) != 1) {
        printf("Fehler\n");
        return 1;
    }

    if (secret[0] == guess) {
        printf("Treffer %c\n", secret[0]);
    }

    int hits = 0;
    for (int i = 0; i < sizeof(secret) - 1; i++) {
        if (secret[i] == guess) {
            hits++;
        }
    }

    printf("Anzahl Treffer: %d\n", hits);

    return 0;
}

