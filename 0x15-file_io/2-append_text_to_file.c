#include "main.h"

/**
 * append_text_to_file - Add a text to the end of a filei
 * @filename: name of file
 * @text_content: string to end of file
 * Return: 1 , -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int folder, state, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	folder = open(filename, O_APPEND | O_WRONLY);
	if (folder == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	folder = write(folder, text_content, i);
	if (state == -1)
		return (-1);

	close(folder);
	return (1);
}
