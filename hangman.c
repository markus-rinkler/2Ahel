#include <stdio.h>

int main()
{
    const char secret = 'a';
    const char guess = 'b';

    if (guess == secret) {
        printf("Treffer %c\n", guess);
    } 
    else {
        printf("Fehler %c\n", guess);
    }



    return 0;
}
