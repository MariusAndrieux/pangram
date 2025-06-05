#include <stdio.h>
#include <string.h>
#include "pangram.h"

int main(void) {
    char sentence[256];  // Allocate buffer

    printf("Choose a sentence :\n");

    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        printf("Sentence failed\n");
    }

    sentence[strcspn(sentence, "\n")] = '\0';

    if(is_pangram(sentence)) {
        printf("\"%s\" is a pangram\n", sentence);
    } else {
        printf("\"%s\" is not a pangram\n", sentence);
    }
    return 0;
}