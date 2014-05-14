#include<stdio.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: ./caesar <offset>\n");
        return 1;
    }

    int offset = atoi(argv[1]);

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
