#include "pangram.h"
#include <string.h>

bool is_pangram(const char *sentence) {
    if(sentence == NULL) return false;

    size_t sentence_len = strlen(sentence);

    for(int i = 65; i <= 90; i++) {
        for(size_t j = 0; j < sentence_len + 1; j++) {
            
            if(j == sentence_len) {
                return false;
            } else if(i == (int)sentence[j] || i + 32 == (int)sentence[j]) {
                break;
            } 
        }
    }
     
    return true;
}
