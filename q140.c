
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[10];

    printf("Enter Gender: ");
    scanf("%s", input);

    if (input[0] == 'M' || input[0] == 'm') {
        p.gender = MALE;
    } 
    else {
        p.gender = FEMALE;
    }

    if (p.gender == MALE) {
        printf("Male");
    } 
    else {
        printf("Female");
    }

    return 0;
}
