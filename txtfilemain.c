#include <stdio.h>
#include "txtfind.h"

#include "txtfind.h"
#include <stdio.h>
#include <string.h>

#define LINE 256
#define WORD 30
#define FILE 250
int main()
{
    char line[LINE];
    char word[WORD];
    char sign;

    scanf("%s", word);
    scanf(" %c", &sign);
    scanf("%c", line);
    scanf("%c", line);

    if (sign == 'a') {
        print_lines(word);
    }
    else if (sign == 'b') {
        print_similar_words(word);
    }
    else {
        printf("Unknown action\n");
    }

    return 0;
}


