#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: file name
 * @letters: the number of letters to read and print
 * Return:  the total number of letters that  read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

int my_file;
char *buf;
ssize_t readf, writef;

if (filename == NULL)
	return (0);

my_file = open(filename, O_RDWR);
if (my_file == -1)
	return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
	free(buf);
	return (0);
}

readf = read(my_file, buf, letters);
if (readf == -1)
	return (0);

writef = write(STDOUT_FILENO, buf, readf);

if (writef == -1 || readf != writef)
	return (0);

free(buf);

close(my_file);

return (writef);
}
