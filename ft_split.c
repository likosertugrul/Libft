#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_isspace(char c) {
    return (c >= 9 && c <= 13) || c == 32; // Boşluk kontrolü
}

int word_count(const char *s) {
    int count = 0;
    while (*s) {
        while (ft_isspace(*s)) // Boşlukları atla
            s++;
        if (*s) {
            count++; // Yeni bir kelime
            while (*s && !ft_isspace(*s)) // Kelimeyi geç
                s++;
        }
    }
    return count;
}

char *get_next_word(const char **s)
{
    const char *start = *s;
    while (**s && !ft_isspace(**s)) // Kelimeyi bul
        (*s)++;
    int length = *s - start; // Kelimenin uzunluğu

    char *word = (char *)malloc(length + 1); // Bellek tahsisi
    if (!word)
        return NULL;

    strncpy(word, start, length); // Kelimeyi kopyala
    word[length] = '\0'; // Sonlandırıcı ekle

    return word;
}

char *ft_split(const char *s)
{
    if (!s)
        return NULL;

    int count = word_count(s); // Kelime sayısını al
    if (count == 0)
        return strdup(""); // Hiç kelime yoksa boş string döndür

    int total_length = 0;
    char **words = malloc(count * sizeof(char*)); // Kelimeler için bellek tahsisi
    if (!words)
        return NULL;

    // Kelimeleri al
    for (int i = 0; i < count; i++) {
        while (ft_isspace(*s)) s++; // Boşlukları atla
        words[i] = get_next_word(&s); // Bir kelime al
        if (!words[i]) {
            // Bellek hatası varsa serbest bırak
            for (int j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return NULL;
        }
        total_length += strlen(words[i]) + 2; // Her kelime için 2 ekleyelim (virgül ve boşluk)
    }

    char *new_str = (char *)malloc(total_length + 1); // Yeni string için bellek tahsisi
    if (!new_str) {
        for (int j = 0; j < count; j++)
            free(words[j]);
        free(words);
        return NULL;
    }

    new_str[0] = '\0'; // Başlangıçta boş string

    // Kelimeleri ayır ve virgüllerle ekle
    for (int i = 0; i < count; i++) {
        if (i > 0) {
            strcat(new_str, ", "); // Virgül ve boşluk ekle
        }
        strcat(new_str, words[i]); // Kelimeyi ekle
        free(words[i]); // Belleği serbest bırak
    }

    free(words); // Kelime dizisi için ayrılan belleği serbest bırak
    return new_str; // Yeni oluşturulan stringi döndür
}

int main(void)
{
    char *first = "Lorem ipsum dolor sit amet";
    char *result = ft_split(first);

    if (result) {
        printf("%s\n", result); // Sonucu yazdır
        free(result); // Belleği serbest bırak
    }

    return 0;
}
