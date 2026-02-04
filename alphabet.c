#include <stdio.h>
#include <ctype.h>

int main(void){
    char set[1000000];
    int c[26] = {0};
    fgets(set, sizeof(set),stdin);
    for (int i = 0; set[i]; i++) {
        set[i] = toupper(set[i]);
        c[set[i]-'A']++;
    }
    int count=0;
    int max = -1;
    int idx = -1;
    for (int k=0; k<26; k++){
        if (c[k] > max){
            max = c[k];
            idx = k;
            count = 0;}
        else if (c[k] == max){count =1;}}
    printf("%c",count?'?': idx+'A');
    return 0;
}