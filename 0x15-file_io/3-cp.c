#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

char *create_buffer(void);
void close_file(int fd);

int main(int argc, char *argv[]) {
    int from, to;
    ssize_t r, w;
    char *buffer;

    if (argc != 3) {
        fprintf(stderr, "Usage: cp file_from file_to\n");
        exit(97);
    }

    buffer = create_buffer();

    from = open(argv[1], O_RDONLY);
    if (from == -1) {
        perror("Error opening source file");
        free(buffer);
        exit(98);
    }

    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (to == -1) {
        perror("Error opening destination file");
        free(buffer);
        close_file(from);
        exit(99);
    }

    while ((r = read(from, buffer, BUFFER_SIZE)) > 0) {
        w = write(to, buffer, r);
        if (w == -1) {
            perror("Error writing to destination file");
            free(buffer);
            close_file(from);
            close_file(to);
            exit(99);
        }
    }

    if (r == -1) {
        perror("Error reading from source file");
        free(buffer);
        close_file(from);
        close_file(to);
        exit(98);
    }

    free(buffer);
    close_file(from);
    close_file(to);

    return 0;
}

char *create_buffer(void) {
    char *buffer = malloc(BUFFER_SIZE);
    if (buffer == NULL) {
        perror("Error allocating buffer");
        exit(99);
    }
    return buffer;
}

void close_file(int fd) {
    if (close(fd) == -1) {
        perror("Error closing file descriptor");
        exit(100);
    }
}
