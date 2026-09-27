#include <stdio.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ')
            printf("%c.", name[i + 1]);
    }

    printf("%s", &name[lastSpace + 1]);

    return 0;
}