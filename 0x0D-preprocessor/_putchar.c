nclude <unistd.h>

/**
 *  *  _putchar - writes the character c to stdout
 *   *  @c: The character to print
 *    *
 *     *  Return: on success 1
 *      *  On error, -1 is returne, and errno is set apptopriately
 *       */
int __putchar(char c)
{
	        return (write(1, &c, 1));
}
