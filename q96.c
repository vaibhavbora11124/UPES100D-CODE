#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int start = 0, i, j;
    char temp;

    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            j = i - 1;

            while (start < j) {
                temp = str[start];
                str[start] = str[j];
                str[j] = temp;

                start++;
                j--;
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            start = i + 1;
        }
    }

    printf("%s", str);

    return 0;
}