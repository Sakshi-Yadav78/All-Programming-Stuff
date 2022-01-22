#include <stdio.h>
int main()
{
	FILE *text_file = fopen("example.txt", "w");
	/* Here we opened a file named
"example.txt" to write some
text in it */
	/* Now, to write some text
in the file, we use the fprintf
function which will write
any text that we give to it. The
fprintf is almost same like the
regular printf, except that the printf
writes texts in the terminal, while
fprintf writes text in a text file.
Hence the first argument of fprintf
is the struct variable we created on
top for our "example.txt" file.
*/
	fprintf(text_file, "This is a text file. n");
	/* After all the file operations are
done, we must close it.
For this we use the fclose function.
Note that since the file is real small,
ignoring this won't cause any problems.
But for large files, this
will cause lots of problems. */
	fclose(text_file);
}