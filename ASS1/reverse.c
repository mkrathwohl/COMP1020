#include<stdio.h>
#include<string.h>

void reverse(char *word)
{
	int i;
	size_t length = strlen(word);
	int temp;
    	for (i = 0; i < (length / 2); i++) 
	{
        	temp = length-i-1;
        	word[i] ^= word[tmp];
        	word[tmp] ^= word[i];
        	word[i] ^= word[tmp];
   	}	
return 0;
}
