#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char set[100000];
    int c[26] = {0};
    fgets(set, sizeof(set), stdin);

    for (int i = 0; set[i] && set[i] != '\n'; i++)
    {
        char ch = toupper(set[i]); // 알파벳만 전제
        c[ch - 'A']++;
    }

    int max = -1, idx = -1;
    int tie = 0;

    for (int k = 0; k < 26; k++)
    {
        if (c[k] > max)
        {
            max = c[k];
            idx = k;
            tie = 0;
        }
        else if (c[k] == max)
        {
            tie = 1;
        }
    }

    printf("%c\n", tie ? '?' : ('A' + idx));
    return 0;
}
