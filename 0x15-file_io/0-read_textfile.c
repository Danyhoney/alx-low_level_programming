#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file_descriptor;
    ssize_t bytes_read, bytes_written;
    char *buffer;

    if (filename == NULL) {
        fprintf(stderr, "Error: filename is NULL\n");
        return 0;
    }

    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1) {
        fprintf(stderr, "Error: failed to open file\n");
        return 0;
    }

    buffer = malloc(sizeof(char) * (letters));
    if (buffer == NULL) {
        fprintf(stderr, "Error: failed to allocate memory for buffer\n");
        return 0;
    }

    bytes_read = read(file_descriptor, buffer, letters);
    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    close(file_descriptor);
    free(buffer);

    return bytes_written;
}
