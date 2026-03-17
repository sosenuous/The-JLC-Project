#include <stdio.h>
#include <sys/stat.h>
int main (int argc, char** argv) {
   if (argc < 2) {
      fprintf(stderr, "Usage: perm <file>\n");
      return 1;
   }
   struct stat st;
   if (stat(argv[1], &st) == -1) {
      perror("FATAL ERROR");
      return 2;
   }
   mode_t m = st.st_mode;
   printf("%c%c%c%c%c%c%c%c%c%c %s\n", S_ISDIR(m)?'d':'-', m&S_IRUSR?'r':'-', m&S_IWUSR?'w':'-', m&S_IXUSR?'x':'-', m&S_IRGRP?'r':'-', m&S_IWGRP?'w':'-', m&S_IXGRP?'x':'-', m&S_IROTH?'r':'-', m&S_IWOTH?'w':'-', m&S_IXOTH?'x':'-', argv[1]);
   return 0;
}
