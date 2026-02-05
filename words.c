#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char set[1000000];
    if (!fgets(set, sizeof(set), stdin)) return 1; 
    int count=0;
    int i=0;
    while (set[i] != '\0'){
        if(set[i] == ' ' || set[i] == '\n'){
            if (isalpha(set[i+1])){
                count++;
                }
            }i++;
        }
    printf("%d", count);
    return 0;
}