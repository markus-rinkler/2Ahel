#include <stdio.h>

int main()
{
    const char secret = 'a';
    char guess;

    printf("Bitte einen Buchstaben eingeben:");
    if ( scanf(" %c", &guess) != 1) {
        printf("Fehler beim Einlesen des Buchstabens\n");
        return 1;
    }

    if (guess == secret) {
        printf("Treffer %c\n", secret);
    } 
    else {
        printf("Fehler %c\n", guess);
    }





    return 0;
}

