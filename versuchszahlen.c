#include <stdio.h>
#include <stdlib.h>
#include <time.h> //für die Zufallszahlengenerierung

int main()
{
    int geheimzahl;
    int tipp;
    int versuche = 10;

    srand(time(NULL));
    geheimzahl = rand() % 10 + 1;

    printf("=== ZAHLENRATEN ===\n"); //Spielstart
    printf("Rate die Zahl von 1 bis 10!\n");

    for (int i = 0; i < versuche; i++) {
        printf("Dein Tipp: ");
        scanf("%d", &tipp);

        if(geheimzahl < tipp) {
            printf("Die geheime Zahl ist kleiner.\n");
        } else if(geheimzahl > tipp) {
            printf("Die geheime Zahl ist groesser.\n");
        }

        if (tipp == geheimzahl) {
            printf("Richtig! Du hast gewonnen!\n");
            return 0;
        } else {
            printf("Falsch! Noch %d Versuche.\n", versuche - i - 1);
        }
    }

    printf("Verloren! Die Zahl war %d.\n", geheimzahl);

    return 0;
}