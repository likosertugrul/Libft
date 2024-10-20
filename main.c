#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strdup(const char* str) {
    // Kopyalanacak stringin uzunluğunu alıyoruz
    size_t len = strlen(str);
    
    // Kopya için yeterli alan tahsis ediyoruz
    // +1 ekleyerek null terminatörü için yer ayırıyoruz
    char* copy = (char*)malloc(len + 1);
    
    // Bellek tahsisi başarısız olduysa null döndürüyoruz
    if (copy == NULL) {
        return NULL;
    }

    // strlcpy kullanarak stringi güvenli bir şekilde kopyalıyoruz
    strlcpy(copy, str, len + 1);
    
    return copy;
}

int main() {
    char* original = "Merhaba Dünya";
    char* duplicate = my_strdup(original);

    if (duplicate != NULL) {
        printf("Kopyalanan string: %s\n", duplicate);
        free(duplicate); // Kopyalanan stringi serbest bırakıyoruz
    } else {
        printf("Bellek tahsisi başarısız!\n");
    }

    return 0;
}
