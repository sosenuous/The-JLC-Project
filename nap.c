#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Usage: nap <seconds>\n");
        return 1;
    }
    int seconds = atoi(argv[1]);
    for (int i = 0; i < seconds; i++) {
        sleep(1);
    }
    return 0;
}