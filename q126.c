#include <stdio.h>

int main() {
    char filename[100];
    char line[200];
    FILE *fp;

    printf("Filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
    } else {
        printf("File opened successfully.\n");

        while (fgets(line, sizeof(line), fp) != NULL) {
            printf("%s", line);
        }

        fclose(fp);
    }

    return 0;
}