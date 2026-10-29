#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    if (output == NULL) {
        printf("Error creating output.txt\n");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("File converted successfully.\n");
    return 0;
}