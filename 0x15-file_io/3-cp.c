#include <fcntl.h>
#include <unistd.h>
#include "main.h"

int main(int argc, char *argv[]) {
int fd_from, fd_to;
ssize_t read_size, write_size;
char buffer[BUFFER_SIZE];

if (argc != 3) {
error_exit(97, "Usage: %s file_from file_to\n", argv[0]);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1) {
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
}

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1) {
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}

while ((read_size = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
write_size = write(fd_to, buffer, read_size);
if (write_size != read_size) {
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}
}

if (read_size == -1) {
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
}

if (close(fd_from) == -1 || close(fd_to) == -1) {
error_exit(100, "Error: Can't close file descriptor\n");
}

return 0;
}
