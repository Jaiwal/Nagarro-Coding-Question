#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORD_LEN    30
#define MAX_WORDS       10


char ** commonWords(char *str1, char *str2)
{
if (str1 != NULL && str2 != NULL)
{
    char a[MAX_WORD_LEN+1];
    char **res = (char**)calloc(MAX_WORDS+1, sizeof(char*));
    if(!res) return NULL;

    int k = 0, j = 0;
    for (int i = 0; str1[i] != '\0' && k < MAX_WORDS; i++)
    {
        if (str1[i] != ' ' && j < MAX_WORD_LEN)
            a[j++] = str1[i];
        if (str1[i] == ' ' || str1[i] == '\0') {
            a[j] = '\0';
            if (strstr(str2,a)) {
                res[k++] = strdup(a);
            }
            j = 0;
        }
    }
    return res;
}
return NULL;
}

int main(void)
{
char **cw = commonWords("one two three", "two three five");
if(cw) {
    for(int i=0; cw[i]; i++) {
        printf("%s ",cw[i]);
        free(cw[i]);
    }
    free(cw);
}
printf("\n");
return 0;
}


