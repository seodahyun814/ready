#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_qr_valid(char c)
{
    // 규격에 정의된 45개 문자 (공백 포함)
    const char *allowed = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ $%*+-./:";

    // strchr는 문자를 찾으면 해당 위치의 포인터를, 못 찾으면 NULL을 반환함
    return (strchr(allowed, c) != NULL);
}

void copy(int R, int *p)
{
    for (int i = 0; i < R; i++)
    {
        printf("%c", *(p + i));
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        char set[30];
        int S[20] = {0};
        int R;
        fgets(set, sizeof(set), stdin);
        if (isdigit(set[0]) && set[0] < '9' && set[0] > '0')
        {
            R = set[0];
        }
        getchar();
        for (int i = 2; i < sizeof(set); i++)
        {
            if (!is_qr_valid(set[i]))
            {
                S[i] = set[i];
            }
        }
        int *p[sizeof(set)];
        for (int j = 0; j < sizeof(set); j++)
        {
            *p += is_qr_valid(set[j]);
            copy(R, *p);
        }
    }
    return 0;
}