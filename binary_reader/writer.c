#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Hexadecimal binary file writer
Exercise about dinamyc memory allocation
*/

int main() {
    FILE *f = fopen("content.dat", "wb");
    const char *content = "Hello from my binary reader";
    unsigned char size = strlen(content);


    if(f == NULL) {
        puts("Erro escrevendo o arquivo");
        return 1;
    }

    fwrite(content, sizeof(char), size, f);
    fclose(f);

    return 0;
}