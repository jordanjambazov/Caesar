#include<stdio.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Usage: ./caesar <decode|encode> <offset>\n");
        return 1;
    }

    char *codec = argv[1];
    if (strcmp(codec, "encode") != 0 && strcmp(codec, "decode") != 0) {
        printf("Wrong option %s. Use encode or decode.\n", codec);
        return 1;
    }

    int offset = atoi(argv[2]);

    char chr;
    char new_chr;
    int read_input = 1;
    while (read_input) {
        chr = getc(stdin);
        if (chr == EOF) {
            read_input = 0;
        } else {
            new_chr = (int) chr + offset;
            printf("%c", new_chr);
        }
    }

    return 0;
}
