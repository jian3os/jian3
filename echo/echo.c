#include <stdio.h>

int main(int argc, char *argv[])
{
	--argc;
	++argv;
	while (argc > 0)
	{
		fputs (argv[0], stdout);
		argc--;
		argv++;
	}
	putchar ('\n');
	
	return 0;
}
