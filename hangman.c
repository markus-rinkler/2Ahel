#include <stdio.h>


    int strcmp(const char word1[], char word2[]){
        int i = 0;
        for (i = 0; word1[i] != '\0' && word2[i] != '\0'; i++) {
            if (word1[i] != word2[i]) {
                return 0;
            }
        }
        return 1;
    }



int main()
{
    const char secret []= "REDBULL4EVER";
    const int len = sizeof(secret)-1;
    char guessed[len];
    char guess;
    int fails;
    int hits;
    // variable inizialisieren _ _ _ _

    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }

   int count_hits(const char *secret, const char *guessed, int len) {
    int hits = 0;
    for (int i = 0; i < len; i++) {
        if (secret[i] == guessed[i]) {
            hits++;
        }
    }
    return hits;
    }

int count_hits(const char *secret[], const char *guessed, int len) {
    int hits = 0;
    for (int i = 0; i < len; i++) {
        if (secret[i] == guessed[i]) {
            hits++;
        }
    }
    return hits;
}

    int fails = 0;    
    while(fails < 5) {
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
        printf("%c", guessed[i]);
    }

    fails += (hits == 0);

    printf("\nAnzahl Treffer: %d\n", hits);

    return 0;
    }
}