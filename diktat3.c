#include <stdio.h>
#include <stdlib.h>

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
    char *wort = malloc(sz);
    for (int i = 0; i < size; i++) {
        wort[i] = c;
    }
    wort[size] = '\0';
    return wort;
}


int main() {
    char *wort = "WORT";
    const int m = strlen(wort);
    char wort2[n];

    for (int i = 0; i < strlen(wort); i++) {
        wort2[i] = '_';
    }
   
    dump(wort );
    free(wortr2);
    return 0;
}


//scope wichtiger fachbegriff