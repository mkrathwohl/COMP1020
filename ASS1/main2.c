#include<stdio.h>
#include<string.h>
 
void reverse(char *word);


int main (int argc, char * argv [])
{
    char word[] = "Happy Birthday!";
    printf("%s\n", word);
    reverse(word);
    printf("%s\n", word);
    reverse(word);
    printf("%s\n", word);
    printf("%s\n", word);
    return 0;
}
