#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int geheimzahl;
    int tipp;
    int cheatzahl = 999;
    int versuche = 10;

    srand(time(NULL));
    geheimzahl = rand() % 10 + 1;

    printf("Rate die Zahl von 1 bis 10!\n");

    while (versuche > 0) {
        printf("Dein Tipp:");
        scanf("%d", &tipp);

        if (tipp == cheatzahl) {
            printf("Du hast die geheime Zahl gefunden! Sie war %d.\n", geheimzahl);
            return 0;
        }

        if (tipp == geheimzahl) {
            printf("Richtig! Du hast gewonnen!\n");
            return 0;
        }
         else 
        {
            versuche;
            printf("Falsch! Noch %d Versuche.\n", versuche);
        }
    }

    printf("Verloren! Die Zahl war %d.\n", geheimzahl);

    

    return 0;
}