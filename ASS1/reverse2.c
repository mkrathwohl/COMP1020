#include<stdio.h>
#include<string.h>
 
void reverse(char *word)
{
    size_t i;
    size_t length = strlen(word);
    size_t tmp;
    for (i = 0; i < (length / 2); i++) {
        tmp = length-i-1;
        /* This is a xor swap. */
        word[i] ^= word[tmp];
        word[tmp] ^= word[i];
        word[i] ^= word[tmp];
    }
}
