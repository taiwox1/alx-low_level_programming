#include "main.h"

/**
 * create_file - create a file that is readable and writable
 * @filename: name of file pointer
 * @text_content: string to write to file
 * Return: 1, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int folder,star , i;

if (filename == NULL)
	return (-1);

folder = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

if (folder == -1)
	return (-1);

if (text_content)
{
	for (i = 0; text_content[i] != '\0'; i++)
		;
	star = write(folder, text_content, i);
	if (star == -1)
		return (-1);
}

close(folder);
return (1);
}
