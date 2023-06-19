#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[100];

    printf("Input word: ");
    scanf("%99s", word); // https://www.youtube.com/watch?v=fjMrDDj47E8

    int len = strlen(word);
    int len2 = strlen(word) / 2;

    for(int i = 0; i < len2; i++)
    {
        if(word[i] != word[--len])
        {
            printf("\"%s\" is not Palindrome\n", word);
            return 0;
        }
    }
    printf("\"%s\" is a Palindrome\n", word);

    return 0;
}
