#include <stdio.h>
#include <stdlib.h>

int check(char *wort1, char *wort2, char c) {
    if (strlen(wort1) == 0 || strlen(wort1) != strlen(wort2)) {
        return -1;
    }
    for (int i = 0; wort1[i] != '\0'; i++) {
        if (wort1[i] == c) {
            wort2[i] = c;
        }
    }
    return 0;
}

int is_lower(char c) {
    return (c >= 'a' && c <= 'z');
}

int is_upper(char c) {
     return (c >= 'A' && c <= 'Z')
}

char normalize(char c) {
    if (!is_upper(c) && !is_lower(c)) { // !is_upper(c) && !is_lower(c) -> De Morgan
        return -1;
    }
    return c + ('a' - 'A');
}


void dump(const char *wort) {
    for(int i =0; wort[0] != \'0'; i++)
        printf("%c ",wort[i];)
    printf("\n");
}

int strlen(const char *wort) {
    int sz = 0;
    for (; wort[sz] != '\0'; sz++)
    ;
    return sz;
}

char* init(int size, char c) {
    char *wort = malloc(sizeof(char) * (size + 1)); // Speicher für das Wort reservieren
    for (int i = 0; i < size; i++) {
        wort[i] = c;
    }
    wort[size] = '\0'; // Nullterminierung ein buchstabe
    //prüft ob wort 1 kleiner als wort 2 und wenn nicht dann -1
    if (strlen(wort) < strlen(wort2)) {
        return wort;
    }
    return wort2;
}

int main() {

    char *wort = "WORT";  //wird eine variable initialisiert
    const int m = init(strlen(wort), '?'); // wort zurückgeben
    char wort2[m];

    dump(wort2);
    check(wort, wort2, 'O');
    free(wort2);



    return 0;
}


//scope wichtiger fachbegriff
// Der Scope (Gültigkeitsbereich) ist der Bereich im Code, in dem eine Variable oder Funktion sichtbar und zugänglich ist. In C gibt es verschiedene Arten von Scopes.