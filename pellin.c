#include <stdio.h>
#include <string.h>

int main(void) {
    char word[101];
    fgets(word, sizeof(word), stdin);

    int n = strlen(word);
    if (n > 0 && word[n - 1] == '\n') {
        word[n - 1] = '\0';
        n--;
    }

    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - 1 - i]) {
            putchar('0');
            return 0;
        }
    }

    putchar('1');
    return 0;
}
