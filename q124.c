#include <stdio.h>

int main() {
    char source[100], destination[100];
    FILE *src, *dest;
    int ch;

    scanf("%s", source);
    scanf("%s", destination);

    src = fopen(source, "r");

    if (src == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    dest = fopen(destination, "w");

    if (dest == NULL) {
        printf("Unable to create destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully to %s\n", destination);

    fclose(src);
    fclose(dest);

    return 0;
}