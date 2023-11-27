/*
* Programmer: Arwa Feroze
* Date: 14/11/2023
* Desc: a C program that takes a sentence as input and uses pointer arithmetic to reverse each word in the sentence while keeping the words in their original order.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWordsInSentence(char *sentence) {
    char *wordStart = sentence;
    char *wordEnd = sentence;

    while (*wordEnd) {
        // Move wordEnd to the end of the current word
        while (*wordEnd && !isspace(*wordEnd)) {
            wordEnd++;
        }

        // Reverse the current word
        reverseWord(wordStart, wordEnd - 1);

        // Move wordStart to the start of the next word
        if (*wordEnd) {
            wordStart = wordEnd + 1;
            wordEnd++;
        }
    }
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline character if present
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    reverseWordsInSentence(sentence);

    printf("Modified sentence with reversed words: %s\n", sentence);

    return 0;
}

