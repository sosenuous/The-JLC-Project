#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "Usage: nap <seconds>\n");
        return 1;
    }
    sleep((unsigned int)atoi(argv[1]));
    return 0;
}