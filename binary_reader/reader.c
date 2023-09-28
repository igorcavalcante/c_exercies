#include <stdio.h>
#include <stdlib.h>

/*
Hexadecimal binary file header
Exercise about dinamyc memory allocation
*/

int main() {
    FILE *f = fopen("content.dat", "rb");
    short bytes = 0;
    char *d_string = NULL;

    if(f == NULL) {
        puts("Erro ao abrir arquivo");
        return 1;
    }

    fseek(f, 0, SEEK_END);
    bytes = ftell(f);
    fseek(f, 0, SEEK_SET);

    d_string = malloc(bytes);

    short read = fread(d_string, sizeof(char), bytes, f);
    printf("Bytes read: %d \n", read);

    puts("Hexadecimal content");
    puts("-----------------------------");
    puts("00 01 02 03 04 05 06 07 08 09");
    puts("-----------------------------");
    for(register int i = 0; i < bytes; i++) {
        printf("%02X", d_string[i]);
        (i + 1) % 10 == 0 ? putchar('\n') : putchar(' ');
    }
    puts("");
    puts("-----------------------------");

    puts("");
    puts("Textual content:");

    rewind(f);
    for(register int i = 0; i < bytes; i++) {
        putchar(d_string[i]);
    }

    puts("");

    fclose(f);

    return 0;
}