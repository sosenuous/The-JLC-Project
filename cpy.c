#include <stdio.h>
#include <stdlib.h>
#define BUFFSIZE 1024
int main(int argc, char** argv) {
    if (argc != 3) {
        printf("Usage: cpy <source> <destination>\n");
        return 1;
    }
    FILE *source = fopen(argv[1], "rb");
    FILE *destination = fopen(argv[2], "wb");
    if (source == NULL) {
        perror("FATAL ERROR");
        return 2;
    }
    if (destination == NULL) {
        perror("FATAL ERROR");
        return 2;
    }
    char buff[BUFFSIZE];
    while (fread(buff, 1, BUFFSIZE, source) > 0) {
        if (fwrite(buff, 1, BUFFSIZE, destination) < 0) {
            perror("FATAL ERROR");
            return 3;
        }
    }
    fclose(source);
    fclose(destination);
    return 0;
}