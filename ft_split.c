#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int word_counter(char const *str, char c)
{
    int i;
    int count;
    
    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] == c)
        {
            i++;
        }
        else{
            count++;
            while (str[i] && str[i] != c)
            {
                i++;
            }
            
        }
    }
    return count;
    
}

static char * create_words(char *word, char const *s, int j, int wordlen)
{
    int i = 0;
    while (wordlen > 0)
    {
        word[i++] = s[j - wordlen--];
    }
    word[i] = 0;
    return word;
    
}

static char **ft_split_words(char **res, char const *s, char c, int w_count)
{
    int i;
    int j;
    int wordlen;

    i = 0;
    j = 0;
    wordlen = 0;
    while (s[j] && i < w_count)
    {
        while (s[j] && s[j] == c)
        {
            j++;
        }
        while (s[j] && s[j] != c)
        {
            j++;
            wordlen++;
        }
        res[i] = (char *) malloc(sizeof(char) * (wordlen + 1));

        if (!res[i])
        {
            return 0;
        }
        create_words(res[i], s, j, wordlen);
        wordlen = 0;
        i++;
        
    }

    res[i] = 0;
    return res;
}

char **ft_split(char const *s, char c)
{
    int w_count;
    char **res;
    if (s == 0)
    {
        return 0;
    }
    w_count = word_counter(s, c);
    res = (char **) malloc(sizeof(char *) * (w_count + 1));

    if (!res)
    {
        return 0;
    }
    ft_split_words(res, s, c, w_count);
    return res;
}
