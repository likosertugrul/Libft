#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Dosyayı yalnızca yazma modunda aç
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    // Dosyaya yazma
    const char *text = "Hello, World!\n";
    ssize_t bytesWritten = write(fd, text, 14); // 14, metnin uzunluğu
    if (bytesWritten == -1) {
        perror("Error writing to file");
        close(fd);
        return 1;
    }

    // Dosyayı kapatma
    close(fd);
    return 0;
}
