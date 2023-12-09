#include <stdio.h>
#include <ctype.h>

void capitalizeFirstLetter(char *sentence) {
    if (sentence[0] != '\0') {
        sentence[0] = toupper(sentence[0]);
    }
    for (int i = 1; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' && sentence[i + 1] != '\0') {
            sentence[i + 1] = toupper(sentence[i + 1]);
        }
    }
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    capitalizeFirstLetter(sentence);

    printf("Modified sentence: %s\n", sentence);

    return 0;
}